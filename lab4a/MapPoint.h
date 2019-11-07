#ifndef MAPPOINT_H
#define MAPPOINT_H

typedef struct {
	char name[30];
	double longitude, latitude;
} MapPoint;


//Funkcja tworzy strukture i przypisuje wartosci
MapPoint construct(const char*, double, double);

//Funkcja wypisuje elementy struktury MapPoint
void print(MapPoint city);

//Funkcja przemieszczajaca dany punkt (zmienia wartosci longitude i latitude, name bez zmian)
void movePoint(MapPoint&, const double, const double);

//Funkcja tworzy nowy punkt znajdujacy sie na srodku odcinka pomiedzy dwoma wybranymi punktami
MapPoint inTheMiddle(MapPoint, MapPoint, const char*);

//W zasadzie, te funkcje nie robia nic
void clear(MapPoint&);
void clear(MapPoint&, MapPoint&);

#endif
