#include <iostream>
#include<stdio.h>

typedef double* DataPtr;
typedef void(*functionPtr)(DataPtr);

double* initializeData(const int);
void printSeries(DataPtr, DataPtr);
void tripple(DataPtr);
void add_one(DataPtr);
void squareroot(DataPtr);
void executeFunction(functionPtr, DataPtr, DataPtr);
void clearData(DataPtr); 

