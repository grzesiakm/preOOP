#pragma once
#include <cstring>
#include <iostream>

//funkcja alokuje pamiec do tablicy stringow i intow
void prepareList(char*** namesList, int** yearsList, int capacity);

//funkcja dodaje nowego studenta o index=l, zwiekszajac capacity tablic do tablicy namesList oraz yearsList. Jako argumenty pobiera tez dane do wstawienia do tablic.
void addStudent(int* number, int* capacity, char*** namesList, int** yearsList, const char* name, const char* surname, int year);

//argumentami funkcji sa aktualna pojemnosc tablicy namesList oraz ona sama. Funkcja wypisuje tylko imiona i nazwiska studentów.
void printListContent(int capacity, char** namesList);

//argumentami funkcji sa aktualna pojemnosc tablicy namesList, ona sama oraz tablica yearsList. Funkcja wypisuje wszystkie wprowadzone dane studentow z obu tablic.
void printAllListContent(int capacity, char** namesList, int* yearsList);

//funkcja przyjmuje w argumentach pojemnosc tablic, numer indeksu studenta oraz obie tablice, ktorych zaalokowana pamiec- zwalnia. indeks studenta wraca do 0, poniewaz nie mamy zadnego wpisanego oraz pojemnosc jest = 0 bo cale miejsce zostalo zwolnione.
void clearStudents(int* capacity, int* number, char*** namesList, int** yearsList);
