#include <stdio.h>
#include <stdlib.h>

int getWidth(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 7;
    }

    if(n%2 == 0) {
        return getWidth(n-1) + n + 4;
    }
    else {
        return getWidth(n-1) + (n+1) + 4;
    }
}

void ChristmasTree(int width, int height, int stars) {
    
    int starPosition = (width - stars) / 2;
    int starCounter = stars;
    
    for(int i = 1; i <=height; i++) {
        
        
        for(int j = starPosition; j>=1; j--) {
            printf(" ");
        }
        // printf("%d, %d", starPosition, starCounter);
        for(int k=starPosition; k < starPosition+starCounter; k++) {
            
            printf("*");
        }
        
        starPosition -= 1;
        starCounter += 2;
        

        printf("\n");
    }


}

// fucntion for the Bottom part of the tree
void BottomPart(int length, int height, int width) {
    
    int space = (int)((width - length) /2);

    if(height%2 == 0) {
        space = space + 1;
    } else {
        space = space;
    }

    for(int i = 1; i <=height; i++) {
        
        for(int j =space; j >=1; j--) {
            printf(" ");
        }
        for(int j = 0; j < length; j++) {
            printf("|");
        }
        
        
        printf("\n");
    }
}


int main(int argc, char* argv[]) {

    int n = atoi(argv[1]);
    
    // int n =2;
    int width = getWidth(n);
    int height = 4;
    int stars = 1;
    int factor = 2;
    // printf("%d", width);
    for(int i =1; i <= n; i++) {
        
        ChristmasTree(width, height, stars);
        height++;
        
        stars = stars + 2*factor;
        
        if(i%2 != 0) {
            factor++;
        }
        
        // printf("%d", stars);
    }
    
    // printf("\n");
    BottomPart(n, n, width);
   
    

    return 0;
}
