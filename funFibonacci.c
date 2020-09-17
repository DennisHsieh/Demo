//Fibonacci
#include <stdio.h>
// Aim:Tell ppl what is Fibonacci like, and ask for input n for the n-th value of the Fibonacci series.
// Aim2: Print all nubmer from 1st to n-th of the Fibonacci series.
long Fibonacci(long);
long printAllFibonacci(long);
long n;
int main(){
  printf("Fibonacci series is like 1,1,2,3,5,...\n");
  printf("Input n:= ");
  scanf("%ld",&n);
  printf("The %ld-th number in Fibonacci series = %ld\n",n,Fibonacci(n));
  printf("All number from 1 to %ld-th number in Fibonnaci series are ",n);
  printAllFibonacci(n);
  return 0;
}
long Fibonacci(long n){
  if ( n==1 || n==2){
    return 1;
  }
  return Fibonacci(n-1)+Fibonacci(n-2);
}
long printAllFibonacci(long n){
  printf("%ld",Fibonacci(n));
  for (long a=n-1;a>0;a--){
      printf(",%ld",Fibonacci(a));
  }
  printf("\n");
  return 0;
}
