#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int my_string_index(char* param_1, char* param_2) {
    
    char *p = strstr(param_1, param_2);

    if(p) {
        return p-param_1;
    }
    return -1;
}