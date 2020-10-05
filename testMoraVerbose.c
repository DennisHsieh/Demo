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
    while (B[i]>1 || B[i]<-1){
      printf("Input error, please retype like 1, 0 or -1\n");
      printf("Input B[%d] = ",i);
      scanf("%d",&B[i]);
    }
  }
  printf("Computer has been prepared.");
  Mora(A,B);
}
void Mora(int A[], int B[]){

}
