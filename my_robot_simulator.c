#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>

 
#define N 0 
#define E 1
#define S 2 
#define W 3 

char* my_robot_simulator(char* param_1) {

int x = 0, y = 0; 
int dir = N; 
char* s = (char*)malloc(sizeof(char*));
  
  
  for (int i=0; param_1[i]; i++) 
  { 
      char move = param_1[i]; 
  
      if (move == 'R') 
        dir = (dir + 1)%4; 
      else if (move == 'L') 
        dir = (4 + dir - 1)%4; 
  
     
      else 
      { 
         if (dir == N) 
            y--; 
         else if (dir == E) 
            x++; 
         else if (dir == S) 
            y++; 
         else 
            x--; 
      } 
  }
  
  if(dir == N) {
      s = "'north'";
  }
  else if(dir == E){
      s = "'east'";
  }
  else if(dir == S){
      s = "'south'";
  }
  else {
      s = "'west'";
  }
  
  char* pos = (char*)malloc(5*sizeof(char*)); 
  sprintf(pos, "{x: %d, y: %d, bearing: %s}", x,y,s); 
  
  return pos; 
}