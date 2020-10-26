#include <stdio.h>
#include <string.h>
int main(){
  char * name1 = "Matt Damon";
  char name2[] = "Dwayne Johnson";
  char name3[12] = "Matt Boomer";
  char namelist[3];
  // namelist[0]=*name1;
  // namelist[1]=*name2;
  // namelist[2]=*name3;
  // for (int i=0; i<3 ; i++){
  //   printf("namelist[%d] = %s\n",i,namelist[i]); // Facing problmes due to lack of knowledge about string and character;
  // }
  printf("name1 is %s with %ld characters\n",name1,strlen(name1));
  printf("name2 is %s with %ld characters\n",name2,strlen(name2));
  printf("name3 is %s with %ld characters\n",name3,strlen(name3));
  if (strncmp(name1,name2,20) == 0){
    printf("%s == %s\n",name1,name2);
  }
  else {
    printf("%s != %s\n",name1,name2);
  }
  if (strncmp(name1,name3,20) == 0){
    printf("%s == %s\n",name1,name3);
  }
  else {
    printf("%s != %s\n",name1,name3);
  }
  if (strncmp(name1,name3,5) == 0){
    printf("%s == %s when strncmp's n is set to be 5\n",name1,name3);
  }
  else {
    printf("%s != %s\n",name1,name3);
  }
  if (strncmp(name2,name3,20) == 0){
    printf("%s == %s\n",name2,name3);
  }
  else {
    printf("%s != %s\n",name2,name3);
  }
}
