/* Sudo code from book
if (I'm the master core) {
    sum = my_x;
    for each core other than myself {
       receive value from core;
       sum += value;
    }
} else {
    send my_x to the master;
}
*/ 

#include <stdio.h>
#include <string.h>
#include <math.c>

int NodeNum = 0;





void recieveValueFromCore(int n, char* me){

}

void sendValueFromCore(int n, char* my_x){

}

void main(int mainargc, char **mainargv){
  NodeNum = atoi(mainargv[1]);
  typedef struct {
    char* instuction[log2(NodeNum)];
  } Node;
  Node NodeArray[NodeNum];
  int i;
  int x;
  int odd;
  for(i = 0; i < NodeNum; i++){
    x = i+1;
    y = x+1;
    odd = (i+1) mod 2;
    if(odd == 1){
      //retrieve value from y  
    } 
    else{
      //send value to x
    }
  }
  
}
