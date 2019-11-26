//
// Created by mg on 08/11/2019.
//

#ifndef UNTITLED5_BITS_H
#define UNTITLED5_BITS_H
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>


class Bits {

    int size;
public:
    int *bit;
    int getSize()const;

    Bits(int _size): size(_size){

        bit= new int[_size];
    }
    ~Bits(){
        delete[] bit;
    }
};

//funkcja pobiera strukture przez wskaznik, tablice intow jako dane ktore maja byc w strukturze oraz rozmiar tych danych
void set(Bits *, int *, int);

//funckja pobiera strukture przez wskaznik i wypisuje jej elelmenty
void print(const Bits *);

//funkcja pobiera dwie struktury Bits za pomoca wskaznika i oddaje kolejna strulture ktora jest suma dwoch poprzednich
Bits add_up(Bits *, Bits *);
//
//funkcja pobiera dwie struktury i dokonuje operacji and na nich
void bit_and(Bits *, Bits *);

//funkcja pobiera dwie struktury i dokonuje operacji xor na nich
void bit_xor(Bits *, Bits *);

//funckja pobiera strukture za pomoca wskaznika i oddaje inta ktory jest zapisana liczba w systemie dziesietnym ze struktury ktora ma liczbe w systemie dwojkowym
int to_decimal(const Bits *);


#endif //UNTITLED5_BITS_H
