
#include <stdio.h>
#include <stdbool.h>

bool my_is_sort(integer_array* param_1) {

    
    int a;
    for(int i=0; i < param_1 -> size-1; i++) {

        if(param_1 -> array[i] != param_1 -> array[i+1]) {
            a = param_1 -> array[i+1] - param_1 -> array[i]; 
            break;
            
        }
        
    }

    for(int i=0; i < param_1 -> size-1; i++) {   
        if(a>0) {
            if(param_1 -> array[i] > param_1 -> array[i+1]) {
                    return false;
                }
                
            }
        else if(a<0){
            if(param_1 -> array[i] < param_1 -> array[i+1]) {
                return false;;
                }
         
            }
        }
        
        return true;
    }
    


