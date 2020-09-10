#include <stdio.h>
#include <string.h>

char* my_strcpy(char* param_1, char* param_2) {

    char* start = param_1;
    while(*param_2 != '\0') {
        *param_1 = *param_2;
        param_1++;
        param_2++;
    }
    *param_1 = '\0';
   
    return start;
}
