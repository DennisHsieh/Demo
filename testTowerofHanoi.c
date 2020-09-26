// Aim1 : Print all the moving procedure
#include <stdio.h>
#include <stdlib.h>
int HanoiMoveCount(int);
int main(){
  int n;
  printf("Input n =");
  scanf("%d",&n);
  printf("There are %d plates need to be move in the Hanoi tower\n",n);
  printf("There are %d moves needed",HanoiMoveCount(n));
}
int HanoiMoveCount(int n){
  if (n==1){
    return 1;
  }
  return 2*HanoiMoveCount(n-1)+1;
}
void HanoiMove(int n){
  if (n==1){
    printf("Move it to C\n");
  }
  printf("I am not done here!!");
}
