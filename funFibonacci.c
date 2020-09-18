//Fibonacci
#include <stdio.h>
  // (Finished) Aim:Tell ppl what is Fibonacci like, and ask for input n for the n-th value of the Fibonacci series.
  // (Finished) Aim2: Print all nubmer from 1st to n-th of the Fibonacci series.
// Aim3: Overcome int restriction which is related to Aim4
// Aim4: Too Slow, there must be some theory I don't know causing slow.
int Fibonacci(int);
int printAllFibonacci(int);
int n;
int main(){
  printf("Fibonacci series is like 1,1,2,3,5,...\n");
  printf("Input n:= ");
  scanf("%d",&n);
  printf("n is better less than 45 due to int type\n");
  printf("The %d-th number in Fibonacci series = %d\n",n,Fibonacci(n));
  printf("All number from 1 to %d-th number in Fibonnaci series are ",n);
  printAllFibonacci(n);
  return 0;
}
int Fibonacci(int n){
  if ( n==1 || n==2){
    return 1;
  }
  return Fibonacci(n-1)+Fibonacci(n-2);
}
int printAllFibonacci(int n){

  for (int a=1;a<n;a++){
      printf("%d,",Fibonacci(a));
  }
  printf("%d\n",Fibonacci(n));
  return 0;
}
