#pragma once
#include <iostream>
#include "Maths.h"


class Fraction{

    	int _mianownik;
    	int _licznik;

	friend Fraction operator * (int x, const Fraction& f);
    	friend std::ostream& operator << (std::ostream& stream, const Fraction& print);

public:
        
        Fraction(int licznik = 0, int mianownik = 1): _mianownik(mianownik), _licznik(licznik) {}
        Fraction operator * (const Fraction& f) const;
        const Fraction operator + (const Fraction& f) const;
	Fraction operator - (const Fraction& f) const;
	operator double() const;
	void simplify();
};

