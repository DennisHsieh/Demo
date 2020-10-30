#include <stdio.h>
struct person{
  char* name;
  int age;
};
int main(void){
  struct person A;
  A.name = "Dennis";
  A.age = 25;
  printf("%s's age is %d\n",A.name, A.age);
}
