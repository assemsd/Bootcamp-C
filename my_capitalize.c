#include <stdio.h>
#include <string.h>

char* my_capitalize(char* param_1) {
    
    int i = 0;  
    int c = -1;

    while(param_1[i] != '\0') {
        if(param_1[i] >= 'a' && param_1[i] <= 'z' && c < 0) {
            param_1[i] = param_1[i] - 32;
            c = 0;
            }
          
        else if(param_1[i] >= 'A' && param_1[i] <= 'Z' && c == 0){
            param_1[i] = param_1[i] + 32;
            c = 0;

        }
        else if(param_1[i] >= 'A' && param_1[i] <= 'Z' && c < 0) {
            param_1[i] = param_1[i];
            c = 0;
            } 
        i++;  
        }    
       
    return param_1;

}