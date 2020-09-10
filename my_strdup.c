#include <string.h>
#include <stdio.h>


char* my_strdup(char* param_1) {

    int n = strlen(param_1);

    char* c = (char*)malloc(n*sizeof(char));

    c = param_1;

    return c;

}