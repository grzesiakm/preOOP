#pragma once
#include "Book.h"

class BooksShelf {
	int _capacity;
	Book* Books;
	int _howMany;
public:
	BooksShelf(int capacity);
	BooksShelf(const BooksShelf& c);
	~BooksShelf();
	void add(const Book&);
	void print() const;
	void remove(int number);
};
