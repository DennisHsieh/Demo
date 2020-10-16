#include <stdio.h>

int main(){
  int A=666;
  int *B=&A;
  printf("Memory address of A is %p\n",&A);
  printf("pointer B is %p\n",B);
  printf("*B (dereference B) = %d\n",*B);

}
