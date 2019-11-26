#include "Bits.h"

int Bits::getSize()const {
    return size;
}
void set(Bits *tab, int *data, int size) {
    for (int i = 0; i < size; i++) {
        tab->bit[i] = data[i];
    }
}

void print(const Bits *tab) {
    int size = tab->getSize();
    for (int i = 0; i < size; i++) {
        std::cout << tab->bit[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

Bits add_up(Bits *dane1, Bits *dane2) {
    int x = dane1->getSize();
    int y =  dane2->getSize();
    int size = x ^ ((x ^ y) & -(x < y));
    int smallerS = std::min(x, y);
    Bits Result(size);
    int c = 0;
    for (int i = size-1, j = smallerS-1; j >= 0; i--, j--) {
        int result = dane1->bit[i] + dane2->bit[j] + c;
        c = result/2;
        result = result%2;
        Result.bit[i] = result;
    }
    for(int i = size- smallerS-1; i>=0; i--){
        int result = dane1->bit[i]  + c;
        c = result/2;
        result = result%2;
        Result.bit[i] = result;
    }
    return Result;
}

void bit_and(Bits *dane, Bits* mask) {
    int size = dane->getSize();
    for (int i = 0; i < size; i++) {
        dane->bit[i] = dane->bit[i] & mask->bit[i];
    }
}

void bit_xor(Bits *dane, Bits *mask) {
    int size = dane->getSize();
    for (int i = 0; i < size; i++)
        dane->bit[i] = dane->bit[i] ^ mask->bit[i];
}

int to_decimal(const Bits *dane) {
    int decimal = 0;
    int size = dane->getSize();
    for (int i = 0; i < size; i++) {
        decimal += dane->bit[i] * pow(2, size-1-i);
    }
    return decimal;
}

