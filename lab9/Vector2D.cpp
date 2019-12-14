#include "Vector2D.h"

Vector2D::Vector2D(double x, double y) {
	_x = x;
	_y = y;
	count++;
}

Vector2D::Vector2D(const Vector2D& v) {
	_x = v._x;
	_y = v._y;
	count++;
	print("copying ");
}

Vector2D::Vector2D(Vector2D&& v): _x(std::exchange(v._x, 0.0)), _y(std::exchange(v._y, 1.0)) {
	print("moving ");
	count++;
}

Vector2D::~Vector2D() {
	count--;
}

Vector2D Vector2D::fromPolar(double r, double phi) {
	return Vector2D(r*cos(phi*2*M_PI/360), r*sin(phi*2*M_PI/360));
}

const Vector2D Vector2D::fromCarthesian(double x, double y) {
	return Vector2D(x, y);
}

void Vector2D::print(std::string vector) const {
	std::cout << vector << "(" << _x << ", " << _y << ")" << std::endl;
}

double Vector2D::dot(const Vector2D& v) const {
	double res = _x*v._x + _y*v._y;
	return res;
}

Vector2D Vector2D::add(const Vector2D& v) const {
	Vector2D vec = Vector2D(_x, _y);;
	vec._x += v._x;
	vec._y += v._y;
	return vec;
}

int Vector2D::count = 0;
