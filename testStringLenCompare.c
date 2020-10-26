#include <stdio.h>
#include <string.h>
void strncmpCustomize(char* input1, char* input2, int n){
  if (strncmp(input1,input2,n)!=0 ){
    printf("%s != %s\n",input1,input2);
  }
  else if (strncmp(input1,input2,n)==0){
    printf("\nIn strncmp(input1,input2,%d)\n",n);
    printf("%s == %s \n\n",input1,input2);
  }
  else {
    printf("Exception occur!\n");
  }
}
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
  strncmpCustomize(name1,name2,20);
  strncmpCustomize(name2,name3,20);
  strncmpCustomize(name1,name3,20);
  strncmpCustomize(name1,name3,4);
  strncmpCustomize(name1,name3,5);
  strncmpCustomize(name1,name3,6);
}
