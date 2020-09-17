#include <stdio.h>

int main(){
  int x;
  while(1){
    if (x==0){
      printf("x=%d\n",x);
      x++;
    }
    else {
      printf("x=%d\n",x);
      break;
    }
  }
}
