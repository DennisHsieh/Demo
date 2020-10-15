#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  short a[10],MAX=0;
  for (int i=0;i<=10;i++){
    a[i]=rand()%100;
    printf("a[%d]=%d ",i,a[i]);
    if (a[i]>=MAX){
      MAX=a[i];
    }
  }
  printf("\nLargest value is %d\n",MAX);
}
