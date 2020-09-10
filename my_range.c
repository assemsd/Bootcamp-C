#include <stdio.h>

int* my_range(int param_1, int param_2) {

    if(param_1 >= param_2) {
        return NULL;
    }
    else {
    int n = param_2 - param_1;
    int* array = (int*)malloc(n*sizeof(int)) ;

        for(int i=param_1; i < param_2; i++) {

            array[i-param_1] = i;     
        }
    return array;
    }
    return NULL;
}
