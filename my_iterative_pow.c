#include <stdio.h>

int my_iterative_pow(int param_1, int param_2) {
    int value = 1;
    if(param_2 < 0) {
        return 0;
    }
    else if(param_2 == 0) {
        return 1;
    }
    else {
        for(int i = 1; i <= param_2;i++) {
            value *= param_1;
        }
        return value;
    }
    return 0;

}