// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac strukture MapPoint, ktore reprezentuje punkt na
// mapie skladajacy sie z nazwy, dlugosci (longitude) i szerokosci
// (latitude) geograficznej (bez oznaczania polkol).

// Funkcja inTheMiddle powinna tworzyc nowy punkt na mapie o zadanej
// nazwie i polozeniu, ktore jest srednia arytmetyczna z polozen
// podanych punktow czyli x = (x_1 + x_2)/2

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Mapa. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy wgrac
// do UPEL: upel.agh.edu.pl/wfiis/course/view.php?id=22

#include <iostream>
#include "MapPoint.h"

int main() {
  const double longitude = 19.938333;
  const double latitude = 50.061389;
  MapPoint krk     = construct("Krakow", latitude, longitude);
  print(krk);
  MapPoint nyc     = construct("NYC", 40.7127, -74.0059 );
  print(nyc);
  MapPoint irkutsk = construct("Irkutsk",  52.283333, 104.283333);
  print(irkutsk);
  const MapPoint& siberiaCapital = irkutsk;
  print(siberiaCapital);

  const double longitudeShift = 4.1234;
  const double latitudeShift = -25.987;
  movePoint(irkutsk, latitudeShift, longitudeShift);
  print(siberiaCapital);

  MapPoint mp = inTheMiddle(krk,  siberiaCapital, "Somewhere but not here");
  print(mp);

  clear(mp);
  clear(krk, nyc);
  clear(irkutsk);
}
/** Wynik dzialania programu:
Position of Krakow. Latitude: 50.0614. Longitude: 19.9383
Position of NYC. Latitude: 40.7127. Longitude: -74.0059
Position of Irkutsk. Latitude: 52.2833. Longitude: 104.283
Position of Irkutsk. Latitude: 52.2833. Longitude: 104.283
Position of Irkutsk. Latitude: 26.2963. Longitude: 108.407
Position of Somewhere but not here. Latitude: 38.1789. Longitude: 64.1725
*/
