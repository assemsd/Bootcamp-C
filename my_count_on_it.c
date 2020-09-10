#include <stdio.h>
#include <string.h>


integer_array* my_count_on_it(string_array* param_1) {

    int n =param_1 -> size;
    integer_array* array = (integer_array*) malloc(sizeof(integer_array));

    array -> size = n;
    array -> array = (int*) malloc(n*sizeof(int));
    
    // integer_array* array = (integer_array*) malloc(n*sizeof(integer_array));

    for(int i=0; i < n; i++) {

        array -> array[i] = strlen(param_1 ->array[i]);
    }

    return array;

}