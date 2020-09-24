#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int NUMBER=rand();
  printf("The random number is %d\n",NUMBER);
}
