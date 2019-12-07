#include "BooksShelf.h"
#include "Book.h"


BooksShelf::BooksShelf(int capacity){
	_capacity = capacity;
	Books = new Book[_capacity];
	_howMany = 0;
}

BooksShelf::BooksShelf(const BooksShelf& c){
	_capacity = c._capacity;
	_howMany = c._howMany;
	Books = new Book[c._capacity];
	for (int i = 0; i < _howMany; i++) {
		Books[i] = c.Books[i];
	}
}

BooksShelf::~BooksShelf(){
	delete[] Books;
}

void BooksShelf::add(const Book& b){
	Books[_howMany] = b;
	_howMany++;
}

void BooksShelf::print() const {
	for(int i = 0; i < _howMany; i++)
		std::cout<<Books[i].get_title()<<std::endl;
}

void BooksShelf::remove(int number){
	_howMany--;
	for (int i = number; i < _howMany; i++) {
		Books[i]=Books[i+1];
	}
}
