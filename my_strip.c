#include <stdio.h>
#include <string.h>

int position(char* p) {
    int pos;
    while (*p == ' ') {
        p++;    
        pos++;
    }
    return pos;
}

char* my_strip(char* param_1) {

    int n = strlen(param_1);
    char* new_string = (char*)malloc(n*sizeof(char*));
      
    int i=position(param_1);
    int j=0;

    while(param_1[i] == ' ') {
        i++;
    }

    while(param_1[i] != '\0') {
        if(!(param_1[i] == ' ' && param_1[i+1] == ' ' )) {
            new_string[j] = param_1[i];
            j++;
        }
        i++;
    }


    if(new_string[j-1] == ' ')
    {
        new_string[--j] = '\0';
    }


    return new_string;

}