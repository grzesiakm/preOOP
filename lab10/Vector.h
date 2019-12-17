#pragma once
#include <iostream>
#include <utility>
#include <math.h>

//class represents size dimension vector
class Vector {
	double* _vector;
	int _size;
public:
	explicit Vector(int size);//constuctor
	Vector(const Vector& v);//copy constructor
	Vector(Vector&& v);//move constructor
	~Vector();//destructor
	double gett(int num) {return _vector[num];}//getter of private value _vector[i]
	int getSize() {return _size;}//getter of private value size of vector
	void print(std::string the) const;//method prints vector and its name first
	static double dot(const Vector& v1, const Vector& v2) noexcept;//static method calculates scalar of 2 vectors
	static Vector sum(const Vector& v1, const Vector& v2);//static method calculates sum of two vectors
	static Vector sum(const Vector& v1, int n);//static method calculates sum of vector and number
	double& at(int position);//method that add a double in particular position
	operator double() const;//operator converts to double
	void print() const;//method that prints vector
	double norm() const;//method that converts to double
};
