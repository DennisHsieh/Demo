#include <stdio.h>
#include <stdlib.h>
// Aim 1: Not work with for keying in
int main(){
  int n;
  printf("Input length of your name = ");
  scanf("%d",&n);
  char name[n];
  // for(int i=0;i<n;i++){
  //   int j=i+1;
  //   printf("Print i = %d",i);
  //   printf("Input your name for the %d-th word = ",j);
  //   scanf("%c",&name[i]);
  // }
  name[0]='D';
  name[1]='e';
  name[2]='n';
  name[3]='n';
  name[4]='i';
  name[5]='s';
  name[6]='\0';
  printf("Your name is %s",name);
  // very cool
}
