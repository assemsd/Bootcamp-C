#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char *argv[]) {

    int i, a, b;

    for(i=1; i < argc; i++) {

        a = open(argv[i], O_RDONLY);

        if(a<0) {
            perror("open");
            goto OUT;
        }

        while(read(a,&b, 1)) {
            write(STDOUT_FILENO,&b,1);
        }
        close(a);
    }

    return 0;
OUT:
    return -1;

}

