#include <stdio.h>
#include "Combination.h"
int main(){
  long m,n;
  printf("m better not large than 20\n");
  printf("Please input m, n to get combination of m choose n");
  scanf("%ld %ld", &m, &n);
  Combination(m,n);
}
