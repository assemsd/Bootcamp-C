#include <stdio.h>
#include <string.h>


int hidenp(char* param_1, char* param_2) {
   
    if(*param_1 == ' ') {
        return 1;
    }

    int i = 0, j = 0;
    while(i < strlen(param_1) && j < strlen(param_2)){
        while(param_1[i] != param_2[j] && j < strlen(param_2)) j++;
        i++;
        j++;
    }

    if(i==strlen(param_1)) {
        return 1;
    }

    return 0;

}