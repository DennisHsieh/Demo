#include <stdio.h>

int main(void){
  int B=0;
  int* A=&B;
  printf("Memory address of A is %p\n",A);
  printf("Memory address of A+1 is %p\n",A+1);
  printf("Memory address of A+2 is %p\n",A+2);

  double* C=0;
  printf("Memory address of C is %p\n",C);
  printf("Memory address of C+1 is %p\n",C+1);
  printf("Memory address of C+2 is %p\n",C+2);
}
