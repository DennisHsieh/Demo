#include <stdio.h>
int main(){
  int a,b,c;
  for (a=0;a<10;a++){
    for (b=0;b<10;b++){
      c = a*b;
      printf(" %d * %d = %d\n", a, b, c);
    }
  }
}
