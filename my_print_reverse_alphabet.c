#include <stdio.h>

void my_putchar(char c) {write(1, &c, 1);}

void my_print_reverse_alphabet() {
    char a;

    for(a = 'z'; a >= 'a'; a--) {my_putchar(a);}
      
     my_putchar('\n');   
    
}