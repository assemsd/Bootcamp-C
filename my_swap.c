#include <stdio.h>
#include <stdlib.h>

void my_swap(int *a, int*b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

