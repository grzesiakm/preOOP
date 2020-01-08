#include "Fraction.h"


Fraction::operator double() const {
	return static_cast<double>(_licznik) / static_cast<double>(_mianownik);
}

Fraction Fraction::operator * (const Fraction& f) const {
	return Fraction(_licznik*f._licznik, _mianownik*f._mianownik);
}

const Fraction Fraction::operator + (const Fraction& f) const {
	return Fraction(_licznik*f._mianownik + f._licznik*_mianownik, _mianownik*f._mianownik);
}

Fraction Fraction::operator - (const Fraction& f) const {
	return Fraction(_licznik*f._mianownik - f._licznik*_mianownik, _mianownik*f._mianownik);
}

std::ostream& operator << (std::ostream& stream, const Fraction& print) {
	stream << print._licznik << "/" << print._mianownik;
	return stream;
}

Fraction operator * (int x, const Fraction& f) {
	return Fraction(x * f._licznik, f._mianownik);
}

void Fraction::simplify() {
	int d = Maths::gcd(_mianownik, _licznik);
	_mianownik /= d;
	_licznik /= d;
}
