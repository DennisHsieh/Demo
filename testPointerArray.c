#include <stdio.h>
# define LEN 10

int main (){
  int A[10]={0};
  printf("A : %p\n",A);
  printf("&A[0] : %p\n",&A[0]);
  int arr[10]={0};
  int* p=arr;
  for (int i=0;i<LEN;i++){
    printf("&arr[%d]: %p",i,&arr[i]);
    printf("\t\t ptr + %d: %p\n",i,p+i);
  }
}
