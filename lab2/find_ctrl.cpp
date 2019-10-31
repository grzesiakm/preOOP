#include <iostream>
#include <cstring>
#include "check_number.h"


char find_ctrl(const char* card) {
    int len = strlen(card); 
    int sum = 0, crd = 0, increase = 0;

    for(int i = len-1; i >= 0; i--) {
        if(increase == 1)
            increase = 2;
        else
            increase = 1;
        crd = *(card + i) -'0';
        crd *= increase;

        if(crd > 9) {
            sum += crd%10 + (crd - (crd%10)) / 10;
        }
        else {
            sum += crd;
        }
    }

    if(sum > 100)
        sum %= 100;
    else if(sum > 10)
        sum %= 10;

    char ctrl = sum + '0';
    return ctrl;
}
