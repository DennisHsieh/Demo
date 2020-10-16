#include <stdio.h>
void swap(int*, int*);
int main(){
  int A=3,B=4;
  swap(&A,&B);
  printf("A=%d,B=%d\n",A,B);
}
void swap(int *x, int *y){
  int tmp;
  tmp=*y;
  *y=*x;
  *x=tmp;
}
