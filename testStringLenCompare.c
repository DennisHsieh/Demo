#include <stdio.h>
#include <string.h>
int main(){
  char * name1 = "Matt Damon";
  char name2[] = "Dwayne Johnson";
  char name3[12] = "Matt Boomer";
  // char namelist[0][3];
  // namelist[0][0]=name1;
  // namelist[0][0]=name1;
  // namelist[0][0]=name1;
  printf("name1 is %s with %ld characters\n",name1,strlen(name1));
  printf("name2 is %s with %ld characters\n",name2,strlen(name2));
  printf("name3 is %s with %ld characters\n",name3,strlen(name3));
  if (strncmp(name1,name2,20) == 0){
    printf("%s == %s\n",name1,name2);
  }
  else {
    printf("%s != %s\n",name1,name2);
  }
}
