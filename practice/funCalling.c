#include <stdio.h>
#include "Greeting.h"
int main(int argc, char * argv[]){
  Greeting(argv[1],argv[2]);
  printf("Have a nice day %s %s.\n",argv[1],argv[2]);
  return 0;
}
