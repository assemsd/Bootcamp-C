#include <stdio.h>

int my_iterative_factorial(int param_1) {

    int f = 1;
    if(param_1 < 0) {
        return 0;
    }
    else if(param_1 == 0) {
        return 1;
    }
    else {
        for(int i = 1; i <= param_1; i++) {
            f *=i;
        }
        return f;
    }
    return 0;

}