#include <stdio.h>
#include <string.h>

void my_print_words_array(string_array* param_1) {

    int n = param_1 -> size;

    for(int  i= 0; i < n; i++) {
        printf(param_1 -> array[i]);
        printf("\n");
    }

}