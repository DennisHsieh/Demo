#include <stdio.h>
typedef struct {
  char* name;
  int age;
} person;
int main(void){
  person A;
  A.name = "Dennis";
  A.age = 25;
  printf("%s is %d\n",A.name,A.age);
}

// define the person struct here using the typedef syntax */
//Define a new data structure, named "person", which contains a string (pointer to char) called name, and an integer called age.
/* testing code */
