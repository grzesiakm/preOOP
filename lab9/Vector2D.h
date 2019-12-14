#pragma once
#include <iostream>
#include <utility>
#include <cmath>

//klasa reprezentuje wektor 2D 
class Vector2D {
	double _x;
	double _y;
	Vector2D(double x, double y); //konstuktor wywolywany tylko przez zdefiniowane niżej dwie metody statyczne
public:
	Vector2D(const Vector2D& v); //konstruktor kopiujacy
	Vector2D(Vector2D&& v); //konstruktor przenoszacy
	~Vector2D(); //destruktor
	static Vector2D fromPolar(double r, double phi); //statyczna metoda tworzaca wektor uzywajac zmiennych biegunowych
	static const Vector2D fromCarthesian(double x, double y); // statyczna metoda tworzaca wektor uzywajac zmiennych kartezjanskich
	void print(std::string vector) const; // metoda wypisujaca wektor
	double dot(const Vector2D& v) const; // metoda zwracajaca iloczyn dwoch wektorow
	Vector2D add(const Vector2D& v) const; // metoda zwracajaca wektor bedacy suma dwoch
	static int count; //statyczna zmienna - ilosc wektorow
};
