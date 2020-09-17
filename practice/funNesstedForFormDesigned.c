#include <stdio.h>
int main(){
  int a=1,b=1,c;
  for (a=1;a<10;a++){
    for (b=1;b<10;b++){
      c=a*b;
      printf("%1d*%1d=%2d ",a,b,c);
    }
    printf("\n");
  }
}
