//Fibonacci
#include <stdio.h>
// Aim:Tell ppl what is Fibonacci like, and ask for input n for the n-th value of the Fibonacci series.
// Aim2: Print all nubmer from 1st to n-th of the Fibonacci series.
long Fibonacci(long);
long n;
int main(){
  printf("Fibonacci series is like 1,1,2,3,5,...\n");
  printf("Input n:= ");
  scanf("%ld",&n);
  printf("The %ld-th number in Fibonacci series = %ld\n",n,Fibonacci(n));
  return 0;
}
long Fibonacci(long n){
  if ( n==1 || n==2){
    return 1;
  }
  return Fibonacci(n-1)+Fibonacci(n-2);
}
