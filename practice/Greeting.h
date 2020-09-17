#include <string.h>
int Greeting(char *temp1, char *temp2){
  char name[400];
  strcpy(name, temp1);
  printf("Good morning, %s %s\n",name, temp2);
  return 0;
}
