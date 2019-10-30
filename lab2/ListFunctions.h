#pragma once
#include <iostream>

void startList(Pair** pairsList, int listSize);
void add(Pair** pairsList, Pair pair, int* listSize, int* pairsNumber);
void printList(Pair* pairsList, int pairsNumber);
void freeList(Pair** pairsList);
