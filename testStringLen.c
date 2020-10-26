#include <stdio.h>
#include <string.h>

int main(void){
  char * name1 = "John Smith";
  printf("#1 : %s is %ld words name.\n",name1,strlen(name1));

  char name2[] = "Daniel Hsieh";
  printf("#2 : %s is %ld words name.\n",name2, strlen(name2));
  return 0;
}
