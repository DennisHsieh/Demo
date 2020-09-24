#include "Factorial.h"
long Combination(long m, long n){
  long i=Factorial(m)/(Factorial(m-n)*Factorial(n));
  printf("Combination of %ld choose %ld is = %ld",m,n,i);
  return i;
}
