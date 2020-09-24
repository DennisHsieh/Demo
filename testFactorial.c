#include <stdio.h>

long n;
long Factorial(long);
int main(){
  printf("Input your number n:=");
  scanf("%ld",&n);
  // printf("\n");
  printf("%ld! = %ld\n",n,Factorial(n));
  return 0;
}

long Factorial(long n){
  if (n==1){
    return 1;
  }
  return n*Factorial(n-1);
}
