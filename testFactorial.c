#include <stdio.h>
#include "Factorial.h"
int n;
int main(){
  printf("Input your number n:=");
  scanf("%d",&n);
  // printf("\n");
  printf("%d! = %d\n",n,Factorial(n));
  return 0;
}
