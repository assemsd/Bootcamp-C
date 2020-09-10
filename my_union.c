#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char* f(char* c, char* p) {
    bool m = true;
    int l = strlen(p);

    while(*c) {
        char tmp = *c;
        m = true;
        for(int i=0; i<strlen(p); i++) {
            if(tmp == p[i]) {
                m = false;
                break;
            }
        }
        if(m==true) {
            p[l] = tmp;
            l++;
        }
        c++;
    }
    return p;
}

char* my_union(char* param_1, char* param_2) {

    int n = strlen(param_1) + strlen(param_2);
    char* p3 = (char*)malloc(n*sizeof(char));
    
    f(param_1, p3);
    f(param_2, p3);

    return p3;

}