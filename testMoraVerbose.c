#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Construct method s.t. f(a)>f(b), f(b)>f(c), f(c)>f(a);
// Aim1: 1 time guessing.
// Aim2: Try to make it interactive!
void Mora(int [], int []);
int n;
int main(){
  srand(time(NULL));
  n=rand()%5+1;
  printf("Let's race %d round for Mora\n",n);
  int A[n],B[n];
  for(int i=0;i<n;i++){
    A[i]=rand()%3-1;
    printf("Input B[%d] = ",i);
    scanf("%d",&B[i]);
    printf("And A[%d] = %d\n",i,A[i]);
    while (B[i]>1 || B[i]<-1){
      printf("Input error, please retype like 1, 0 or -1\n");
      printf("Input B[%d] = ",i);
      scanf("%d",&B[i]);
    }
  }
  printf("Computer has been prepared.\n");
  Mora(A,B);
  // Output result
}
void Mora(int A[], int B[]){
  for (int i=0;i<n;i++){
    if (A[i]-B[i]==1 || A[i]-B[i]==-2){
      printf("A[%d] > B[%d] , A wins!\n",i,i);
    }
    else if (A[i]-B[i]==-1 || A[i]-B[i]==2){
      printf("A[%d] < B[%d] , B wins!\n",i,i);
    }
    else{
      printf("A[%d] = B[%d] , A and B ties!\n",i,i);
    }
  }
}
