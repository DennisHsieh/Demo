#include <stdio.h>
#include <stdlib.h>
#include "Foo.h"
int main(void){
  int varX;
  varX = Foo();
  printf("Testing Foo, the VarX, is %d\n",varX);
  exit(0);
}
