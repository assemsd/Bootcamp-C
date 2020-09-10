#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1) {

    int i, len;
    char *start, *end, temp;

    len = strlen(param_1);

    start = param_1;
    end = param_1+len-1;

    for(i=0; i < len/2; i++) {
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }

    return param_1;
}


