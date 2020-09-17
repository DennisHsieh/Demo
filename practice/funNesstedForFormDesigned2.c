#include <stdio.h>
int main(){
  int a=1,b=1,c;
  for (b=1;b<10;b++){
    for (a=1;a<10;a++){
      c = a * b;
      printf("%1d*%1d=%02d",a,b,c);
      if (a<10){
        printf(" ");
      }
    }
    printf("\n");
  }
}
