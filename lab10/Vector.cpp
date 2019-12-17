#include "Vector.h"

Vector::Vector(int size) {
	_size = size;
	_vector = new double[_size];
	for (int i = 0; i < _size; i++) 
		_vector[i] = 0;
}

Vector::Vector(const Vector& v): _vector(new double[v._size]), _size(v._size) {
         for(int i = 0; i < _size; i++)
		 _vector[i] = v._vector[i];
}

Vector::Vector(Vector&& v): _vector(v._vector), _size(std::exchange(v._size, 0)) {
	v._vector = 0;
}

Vector::~Vector(){
	delete[] _vector;
}

void Vector::print(std::string the) const {
	std::cout<<the<<"(";
	for (int i = 0; i < _size-1; i++)
		std::cout<<_vector[i]<<", ";
	std::cout<<_vector[_size-1]<<")"<<std::endl;
}

void Vector::print() const {
	std::cout<<"(";
	for (int i = 0; i < _size-1; i++)
		std::cout<<_vector[i]<<", ";
	std::cout<<_vector[_size-1]<<")"<<std::endl;
}

double Vector::dot(const Vector& v1, const Vector& v2) noexcept{
	double res = 0.0;
	Vector tmp1 = v1;
	Vector tmp2 = v2;
	for (int i = 0; i < tmp1.getSize(); i++)
		res += tmp1.gett(i)*tmp2.gett(i);
	return res;	
}

double& Vector::at(int position) {
	return _vector[position];
}

Vector Vector::sum(const Vector& v1, const Vector& v2) {
	Vector tmp1 = v1;
	Vector tmp2 = v2;
	Vector res(tmp1.getSize());
	for (int i = 0; i < tmp1.getSize(); i++)
		res._vector[i] = tmp1.gett(i)+tmp2.gett(i);
	return res;
}

Vector Vector::sum(const Vector& v1, int n) {
	Vector tmp1 = v1;
	Vector res(tmp1.getSize());
	for (int i = 0; i < tmp1.getSize(); i++)
		res._vector[i] = tmp1.gett(i)+n;
	return res;
}

double Vector::norm() const {
	double res = 0;
        for(int i = 0; i < _size; i++)
                res += (_vector[i] * _vector[i]);
        return sqrt(res);
}

Vector::operator double() const {
        return norm();
}
