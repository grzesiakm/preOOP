#include"MapPoint.h"
#include<iostream>
#include<cstring>

MapPoint construct (const char* name, double latitude, double longitude) {
	MapPoint newPoint;
	strcpy(newPoint.name, name);
	newPoint.latitude = latitude;
	newPoint.longitude = longitude;
	return newPoint;
}

void print (MapPoint city) {
	std::cout << "Position of " << city.name << ". Latitude: " << city.latitude << ". Longitude: " << city.longitude << std::endl;

}

void movePoint (MapPoint& point, const double latitudeShift, const double longitudeShift) {
	point.latitude+=latitudeShift;
	point.longitude+=longitudeShift;
}

MapPoint inTheMiddle (MapPoint city1, MapPoint city2, const char* name) {
	double latitude = (city1.latitude+city2.latitude)/2;
	double longitude = (city1.longitude+city2.longitude)/2;
	MapPoint newElement = construct(name, latitude, longitude);
	return newElement;
}

void clear(MapPoint& point) {
}
void clear(MapPoint& point1, MapPoint& point2) {
}
