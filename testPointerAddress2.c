#include <stdio.h>

int main(){
  int A=666;
  int *B=&A;

  printf("A = %d\n",A);
  printf("*B = %d\n",*B);

  *B=777;
  printf("After giving *B of value 777\n");

  printf("A = %d\n",A);
  printf("*B = %d\n",*B);
}
