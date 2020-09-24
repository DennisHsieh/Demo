#include <stdio.h>
#include "Factorial.h"
long n;
int main(){
  printf("Input your number n:=");
  scanf("%ld",&n);
  // printf("\n");
  printf("%ld! = %ld\n",n,Factorial(n));
  return 0;
}
