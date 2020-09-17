//Fibonacci
#include <stdio.h>
  // (Finished) Aim:Tell ppl what is Fibonacci like, and ask for input n for the n-th value of the Fibonacci series.
  // (Finished) Aim2: Print all nubmer from 1st to n-th of the Fibonacci series.
// Aim3: Overcome long restriction which is related to Aim4
// Aim4: Too Slow, there must be some theory I don't know causing slow.
long Fibonacci(long);
long printAllFibonacci(long);
long n;
int main(){
  printf("Fibonacci series is like 1,1,2,3,5,...\n");
  printf("Input n:= ");
  scanf("%ld",&n);
  printf("n is better less than 45 due to long type\n");
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

  for (long a=1;a<n;a++){
      printf("%ld,",Fibonacci(a));
  }
  printf("%ld\n",Fibonacci(n));
  return 0;
}
