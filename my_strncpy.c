#include <stdio.h>


char* my_strncpy(char* param_1, char* param_2, int param_3) {

    if(param_1 == NULL) {
        return NULL;
    }

    char* ptr = param_1;

    while(*param_2 != '\0' && param_3--){
        *param_1 = *param_2;
        param_1++;
        param_2++;
    }

    *param_1 = '\0';

    return ptr;

}