#include <stdio.h>

long n;
long funFactorial(long);
int main(){
  printf("Input your number n:=");
  scanf("%ld",&n);
  // printf("\n");
  printf("%ld! = %ld\n",n,funFactorial(n));
  return 0;
}

long funFactorial(long n){
  if (n==1){
    return 1;
  }
  return n*funFactorial(n-1);
}
