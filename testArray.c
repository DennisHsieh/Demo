#include <stdio.h>
#include <stdlib.h>
double AverageOf(int);
int main(){
  int n;
  printf("Time to sovle the average number of the input data\n");
  printf("Input n =");
  scanf("%d",&n);
  printf("Average is %f",AverageOf(n));
}
double AverageOf(int n){
  int StuScore[n-1],SUM=0;
  for (int i=0;i<n;i++){
    printf("Input person %d score = ",i+1);
    scanf("%d",&StuScore[i]);
    SUM+=StuScore[i];
  }
  return (double)SUM/n;
}
