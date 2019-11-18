#pragma once
#include <string>
#include <cmath>


class Distance {

public:
	Distance(double latitude, double longitude) : _latitude(latitude), _longitude(longitude){};
	double get_latitude() const;
	double get_longitude() const;
	double dist() const;
	~Distance();

private:
	double _latitude;
	double _longitude;
};

class Coordinates {

public:
	Coordinates(std::string city, double latitude, double longitude): _city(city), _latitude(latitude), _longitude(longitude){};
	void print() const;
	void move(double latPlus, double lonPlus);
	double& latitude();
	double latitude() const;
	double longitude() const;
	std::string name() const;
	Distance distance(Coordinates place);
	Coordinates closestFrom(const Coordinates& place1, const Coordinates& place2) const;
	~Coordinates();

private:
	std::string _city;
	double _latitude;
	double _longitude;
};

