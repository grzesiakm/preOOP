#include "Coordinates.h"
#include <cmath>
#include <string>
#include <iostream>


double Distance::get_latitude() const { 
	return _latitude; 
}

double Distance::get_longitude() const { 
	return _longitude; 
}

double Distance::dist() const { 
	return hypot(_latitude, _longitude); 
}

Distance::~Distance() {
}

Coordinates::~Coordinates() {
}

void Coordinates::print() const {
	if(_latitude > 0)
		std::cout << _city << ": " << _latitude << "N "; 
	else 
		std::cout << -_latitude << "S ";
	if(_longitude > 0)
		std::cout << " " << _longitude << "E" << std:: endl;
	else
		std::cout << -_longitude << "W" << std::endl;
}

void Coordinates::move(double latPlus, double lonPlus) {
	_latitude += latPlus;
	_longitude += lonPlus;
}

double Coordinates::latitude() const { 
	return _latitude; 
}	

double& Coordinates::latitude() { 
	return _latitude; 
}

double Coordinates::longitude() const { 
	return _longitude; 
}

std::string Coordinates::name() const { 
	return _city; 
}

Distance Coordinates::distance(Coordinates place) {
		return Distance(_latitude-place.latitude(), _longitude-place.longitude());
}

Coordinates Coordinates::closestFrom(const Coordinates& place1, const Coordinates& place2) const {
		double latDist1 = _latitude - place1.latitude();
		double latDist2 = _latitude - place2.latitude();
		double lonDist1 = _longitude - place1.longitude();
		double lonDist2 = _longitude - place2.longitude();

		if(Distance(latDist1, lonDist1).dist() < Distance(latDist2, lonDist2).dist()) 
			return place1;
		else
			return place2;
}

