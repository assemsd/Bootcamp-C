#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool f(char a, char *p) {
    while(*p) {
        if(a==*p) {
            return true;
        }
        p++;
    }
    return false;
}

char* inter(char* param_1, char* param_2) {
    int n = strlen(param_1) + strlen(param_2);

    char* p3 = (char*)malloc(n*sizeof(char));
    int k = 0;

    while(*param_1 && *param_2) {
        if(f(*param_1,param_2) && !f(*param_1, p3)) {
            p3[k] = *param_1;
            k++;
        }
        param_1++;
        param_2++;
    }
    return p3;
}
       