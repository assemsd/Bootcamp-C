#include <stdio.h>
#include <string.h>

char* my_strstr(char* param_1, char* param_2) {

    size_t lenP2;

    lenP2 = strlen(param_2);

    if(!*param_2) {
        return param_1;
    }

    while(*param_1 != '\0') {

        if(*param_1 == *param_2) {
            if(!strncmp(param_1, param_2, lenP2)) {
                return (char *)param_1;
            }

        }
        param_1++;
    }

    return NULL;
}