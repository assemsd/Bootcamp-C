#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **argv) {

    if(ac==3) {

        int x = atoi(argv[2]);
        int y = atoi(argv[1]);

        int i, j;

        for(i=1;i<=x;i++) {
            for(j=1;j<=y;j++) {
                if((i==1 && j==1) ||(i==x && j==1) || (i==1 && j==y) || (i==x && j==y)){
                    putchar('o');
                }
                else if((j>1 && j<y && i==1) ||(j>1 && j<y && i==x)) {
                    putchar('-');
                }
                else if((i>1 && i<x && j==1) || (i>1 && i<x && j==y)) {
                    putchar('|');
                }
                else {
                    putchar(' ');
                }
            }  
        
            putchar('\n');
        }

    }
    else {
        return 0;
    }
}