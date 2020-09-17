#include <stdio.h>
#include <string.h>

int Greeting(char *temp1, char *temp2){
  char name[400];
  strcpy(name, temp2);
  printf("Hello %s %s\n", temp1, name);
}
int main(int argc, char * argv[]){
  Greeting(argv[1], argv[2]);
  printf("Goodbye %s %s \n", argv[1], argv[2]);
}
