#include <stdio.h>
#include <string.h>

int main(void){
  char str1[20] = "Hello";
  char str2[20] = "World";
  strncat(str1,str2,3);
  printf("str1 is strncated like : \"%s\"\n",str1);
  strncat(str1,str2,10);
  printf("%s\n",str1);
}
