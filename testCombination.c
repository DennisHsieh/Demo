#include <stdio.h>
#include <stdlib.h>
#include "Combination.h"
int main(){
  long m,n;
  printf("Please input m, n to get combination of m choose n");
  scanf("%ld %ld", &m, &n);
  printf("Combination of m choose n is = %ld", Combination(m,n));
}
