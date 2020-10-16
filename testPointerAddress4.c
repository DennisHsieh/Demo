#include <stdio.h>

int main(){
  const int A=666;
  int *B=&A;
  *B=777;
  printf("*B is forced changing to %d\n",*B);
}
