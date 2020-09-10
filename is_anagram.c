#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_anagram(char* param_1, char* param_2) {
    int p1 = strlen(param_1);
    int p2 = strlen(param_2);

    int s1 = 0;
    int s2 = 0;

    for(int i =0; i <p1; i++){
        s1 += param_1[i] - '0';
    }
    
    for(int i =0; i <p2; i++){
        s2 += param_2[i] - '0';
    }

    if(s1-s2 == 0) {
        return 1;
    }
    else {
        return 0;
    }


    return 0;
}