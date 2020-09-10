#include <stdio.h>

void my_putchar(char c) {write(1, &c, 1);}

void my_print_numbers () {
    char a;
    for(a ='0'; a<='9';a++) {
        my_putchar(a);
    }
    my_putchar('\n');
}