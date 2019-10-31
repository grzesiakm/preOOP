#include "check_number.h"


bool number_correct(const char* card) {
    char ctrl = find_ctrl(card); 
    if(ctrl == '0')
        return true;
    else
        return false;
}
