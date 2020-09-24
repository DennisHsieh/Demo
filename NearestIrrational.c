#include <stdio.h>
int NearN(int);
int main(){
  int n;
  printf("Input n:=");
  scanf("%d",&n);
  NearN(n);
  return 0;
}

int NearN(int n){
  for (int i=1;i<=n;i++){
    float j =(2*i+1)*(2*i+1)/4.0;
    if ((i*i < n) && ((i+1)*(i+1)>n)){
      // printf("Finding i =%d\n",i);

      if ((2*i+1)*(2*i+1) < 4*n){
        // printf("%d < %d\n",(2*i+1)*(2*i+1),4*n);
        printf("%4.2f < %d\n",j,n);
        printf("%d is the nearest integer to %d\n",i+1,n);
      }
      else{
        // printf("%d > %d\n",(2*i+1)*(2*i+1),4*n);
        printf("%4.2f > %d\n",j,n);
        printf("%d is the nearest integer to %d\n",i,n);
      }
    }
  }
  return 0;
}
