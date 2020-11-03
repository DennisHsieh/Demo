#include <stdio.h>
typedef struct{
  char* name;
  int age;
}person;
int main(void){
  person A;
  A.name = "DenBion";
  A.age = 25;
  printf("%s is %d\n", A.name, A.age);
}
