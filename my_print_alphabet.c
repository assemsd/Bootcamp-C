#include <stdio.h>

void my_putchar(char c) {write(1, &c, 1);}

void my_print_alphabet() {
    char a;

    a = 'a';
    while(a<='z') {
        my_putchar(a);       
        a++;
    }   
     my_putchar('\n');   
    
}