#include <stdio.h>

int my_fibonacci(int param_1) {

    int e1 = 0;
    int e2 = 1;
    int next;

    if(param_1 < 0) {
        return -1;
    }
    else {
        for(int i = 0; i <= param_1-2; ++i) {
            next = e1 + e2;
            e1 = e2;
            e2 = next;
        }
    }

    return next;

}