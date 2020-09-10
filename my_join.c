#include <stdio.h>
#include <string.h>

char* my_join(string_array* param_1, char* param_2) {

    
    // char* new_p = NULL;
    // size_t lenp2 = strlen(param_2), sz = 0;
    // int first = 1;
    // while(*param_1 -> array) {
    //     int t = strlen(param_1 ->array);
    //     void* tmp = realloc(new_p, sz+t+(first?0:lenp2) + 1);
    //     // if(!tmp) {
    //     //     perror("realloc-tmp");
    //     //     exit (EXIT_FAILURE);
    //     // }
    //     new_p = tmp;
    //     if(!first) {
    //         strcpy (new_p + sz, param_2);
    //         sz += lenp2;
    //     }
    //     strcpy(new_p+sz, *param_1++);
    //     first = 0;
    //     sz += t;
    // }

    // return new_p;

    int n = param_1 -> size;
    int l = strlen(param_2);
    int s = 0;
    int d = 0;
    for(int i = 0; i < n; i++){
        s += strlen(param_1->array[i]);
    }
    char* p = (char *)malloc(s+(n-1)*l);
    
    for(int i=0; i < n-1; i++) {
        for(int j=0; j<strlen(param_1->array[i]); j++) {
            p[d] = param_1->array[i][j];
            d++;
        }

                   
            for(int k = 0; k < strlen(param_2); k++) {
                p[d] = param_2[k];
                d++;
            }
        
    }
   // printf(param_1->array[n-1]);
    p[d] = param_1->array[n-1][0];

    return p;

}