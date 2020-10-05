#include <stdio.h>
#include <stdlib.h>
void ChangeArray(int []);
int main(){
  int A[2];
  printf("Input value of 1x2 array A[]\n");
  for(int i=0;i<2;i++){
    printf("Input A[%d] = ",i);
    scanf("%d",&A[i]);
  }
  ChangeArray(A);
  printf("After ChangeArray\n");
  for(int i=0;i<2;i++){
      printf("Current A[i] = %d\n",A[i]);
  }
}
void ChangeArray(int A[]){
  int tmp;
  tmp=A[0];
  A[0]=A[1];
  A[1]=tmp;
}
