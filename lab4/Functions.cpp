#include "Functions.h"

DataPtr initializeData(const int size) {
        DataPtr data = new double[size];
        for (int i = 0; i < size; i++) {
                data[i] = i;
        }
        return data;
}

void printSeries(DataPtr start, DataPtr end) {
        for (; start<end; start++) {
                std::cout << *start;
                if (start+1 != end) {
                        std::cout << ", ";
                }
        }
        std::cout << std::endl;
}

void add_one(DataPtr x) {
        (*x)++;
}

void tripple(DataPtr x) {
        (*x)*=3;
}

void squareroot(DataPtr x) {
        *x = sqrt(*x);
}

void executeFunction(functionPtr funContainer, DataPtr start, DataPtr end) {
        for (; start < end; start++) {
                funContainer(start);
        }
}

void clearData(DataPtr x) {
        delete[] x;
}

