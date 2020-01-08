#include "FractionArray.h"

std::ostream& operator << (std::ostream& stream, const FractionArray& f) {
	stream << "[ ";
	for (int i = 0; i < f._size; i++)
		stream << f._data[i] << " ";
	stream << "]";
	return stream;
}

const Fraction& FractionArray::operator [] (int i) const {
	return _data[i];
}

Fraction& FractionArray::operator [] (int i) {
	return _data[i];
}
