#include <ctype.h>
#include <stdio.h>
#include <string.h>

char* rcapitalize(char* param_1) {

    for(int i=0; i < strlen(param_1); i++) {
        if(param_1[i+1] == ' ' || param_1[i+1]=='\0') {
            param_1[i] = toupper(param_1[i]);
        }
        else {
            param_1[i] = tolower(param_1[i]);
        }        
    }
    
    return param_1;
}