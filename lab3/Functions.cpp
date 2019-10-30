#include "Functions.h"
#include <iostream>
#include <cmath>

double* initializeData(const int size){
    double* data = new double[size];
    for(int i=0; i<size; i++)
        data[i] = i;
    return data;
}

void printSeries(DataPtr start, DataPtr end){
    while(start != end){
        std::cout<< *(start)++;
		if(start != end)
			std::cout<<", ";
    }
	std::cout << std::endl;
   
}

void tripple(DataPtr start){
	*start *= 3;
}

void add_one(DataPtr start){
	*start += 1; 
}

void squareroot(DataPtr start){
	*start = sqrt(*start);
}

void executeFunction(functionPtr fun, DataPtr start, DataPtr end){
	while (start != end){
		fun(start);
		start++;
	}
}

void clearData(DataPtr data){
    delete[] data;
}
