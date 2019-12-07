#pragma once
#include <iostream>
#include <string>

class Book {
	std::string _title;	
public:
	Book();
	Book(std::string title);
	~Book();
	std::string get_title() {return _title;}
};

