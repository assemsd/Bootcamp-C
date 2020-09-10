#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string_array* my_split(char* str, char* sep) {

    string_array* new_arr = (string_array*)malloc(sizeof(string_array*));
    new_arr->size = 0;
    new_arr->array = (char**)malloc(sizeof(char*));

    if(strlen(str) == 0) return NULL;
    
    int i = 0;
    
    char* p = strtok(str, sep);
    while(p != NULL){
        
        new_arr->array[i] = p;
        p = strtok(NULL, sep);
        i++;
        new_arr->size++;
    }
    return new_arr;
}