#include "StudentList.h"

void prepareList(char*** namesList, int** yearsList, int capacity) {
	
	(*namesList) = new char*[capacity];
	(*yearsList) = new int[capacity];
	return;
}

void addStudent(int* number, int* capacity, char*** namesList, int** yearsList, const char* name, const char* surname, int year) {

	if (*number >= *capacity) {
		(*capacity) += 2;
//		prepareList(namesList, yearsList, *capacity);
//		addStudent(number, capacity, namesList, yearsList, 
//				name, surname, year);
		int* temp = *yearsList;
		(*yearsList) = new int[*capacity];
		for(int i=0; i<*number; i++){
			(*yearsList)[i] = temp[i];
		}
		delete []temp;

		char** tmpr = new char*[*number];
		for(int i=0; i<*number; i++){
			tmpr[i]=(*namesList)[i];
		}
		delete [](*namesList);
		(*namesList) = new char*[*capacity];
		for(int i=0; i<*number;i++){
			(*namesList)[i] = tmpr[i];
		}
	}

		int nameSize = strlen(name) + strlen(surname) + 2;
		(*namesList)[*number] = new char[nameSize];

		strcpy((*namesList)[*number], name);
		strcpy((*namesList)[*number]+strlen(name), " ");
		strcpy((*namesList)[*number]+strlen(name)+1, surname);

		(*yearsList)[*number] = year;
		(*number)++;

	return;
}

void printListContent(int capacity, char** namesList) {

	for (int i = 0; i < capacity; i++) {
		std::cout << *(namesList + i) << std::endl;
	}
	std::cout << std::endl;
	return;
}

void printAllListContent(int capacity, char** namesList, int* yearsList) {

	for (int i = 0; i < capacity; i++) {
		std::cout << *(namesList + i) << " - " << *(yearsList + i) << std::endl;
	}
	std::cout << std::endl;
	return;
}

void clearStudents(int* capacity, int* number, char*** namesList, int** yearsList) {

	for (int i = 0; i < *number; i++) {
		delete[] (*namesList)[i];
	}
	delete [] (*namesList);
	delete [] (*yearsList);
	*number = 0;
	*capacity = 0;
	return;
}
