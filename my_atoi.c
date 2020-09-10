#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int my_atoi(char* param_1) {
    int r = 0;
    int i = 0;
    bool isNegative = false;
    if(param_1[i] == '-') {
        isNegative =true;
        i++;
    }
    while(param_1[i] &&(param_1[i] >= '0' && param_1[i] <= '9')) {
        r = r* 10 + (param_1[i] - '0');
        i++;
    }
    if(isNegative) r = -1*r;
    return r;
}