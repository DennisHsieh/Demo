#include <stdio.h>

int main(){
  int A=666;
  void *B=&A;
  int *intB=(int*)B;
  printf("intB = %d\n",*intB);
}
