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
#include <math.h>

int NodeNum = 0;





void recieveValueFromCore(int n, char* me){

}

void sendValueFromCore(int n, char* my_x){

}

void main(int mainargc, char **mainargv){
  NodeNum = atoi(mainargv[1]);
  int depthlimit = (int) ceil(log2(NodeNum));
  int core_difference = 1;
  int divisor = 2;
  int b = 0;
  int i = 0;
  int z = 0;
  int tail = 0;
  printf(" ");
  for(i = 0; i < NodeNum; i++){
    printf("%5d", i);
  }
  printf("\n");
  
  while(depthlimit != 0){
    printf("%d   ", z++);
    for(i = 0; i < NodeNum; i++){
      if(i%divisor == 0){
	if(i+core_difference < NodeNum){
	  printf("R%-4d", i+core_difference);
	  if(core_difference > 1){
	    for(b = 1; b < core_difference; b++){
	      printf("     ");
	    }
	  }
	}
	else{
	  printf("    ");
	}
      }
      else if(i%divisor == core_difference){
	
	printf("S%-4d", i-core_difference);
	if(core_difference > 1){
	  for(b = 1; b < core_difference; b++){
	    printf("     ");
	  }
	}
      }
      
    }
    printf("\n");
    depthlimit--;
    divisor *= 2;
    core_difference *= 2;
  }
  

  
}
