#pragma once
#include <iostream>
#include "Fraction.h"

class FractionArray {
	Fraction* _data;
	int _size;

	friend std::ostream& operator << (std::ostream& stream, const FractionArray& f);

public:
      	FractionArray(int size):  _data(new Fraction[size]), _size(size) {
		for (int i = 0; i < _size; i++)
			_data[i] = Fraction();
	}
      	~FractionArray() {delete[] _data;}
      	const Fraction& operator [] (int i) const;
      	Fraction& operator [] (int i);
};
