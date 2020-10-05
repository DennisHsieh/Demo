// Status: Faied. Cause not able to meet Aim1 yet. Ready to quit
// Aim1 : Print all the moving procedure
#include <stdio.h>
#include <stdlib.h>
int HanoiMoveCount(int);
void HanoiMove(int,char,char,char);
int main(){
  int n;
  printf("Input n =");
  scanf("%d",&n);
  if(n>=1){
    printf("There are %d plates need to be move in the Hanoi tower\n",n);
    printf("There are %d moves needed",HanoiMoveCount(n));
    printf("Start illustrating HanoiMove.\n");
    HanoiMove(n,'a','b','c');
  }
  else{
    printf("Input n should be larger than 0!\n");
  }
}
int HanoiMoveCount(int n){
  if (n==1){
    return 1;
  }
  else{
    return 2*HanoiMoveCount(n-1)+1;
  }
}
void HanoiMove(int n,char a,char b,char c){
  int times=0;
  if (n>1){
    HanoiMove(n-1,a,c,b);
    printf("Move %d from %c to %c\n",n,a,c);
    HanoiMove(n-1,b,a,c);
  }
  else{
    printf("Move %d from %c to %c\n",1,a,c);
  }
}
