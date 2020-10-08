#include <stdio.h>
#include "Factorial.h"
#define SIZE 200
long n;
int main(){
  printf("Need to come up method to display 50!= \n");
  // Use the code we write before Factorial.h
  printf("Input your number n:=");
  scanf("%ld",&n);
  if (n<20){
    printf("%ld! = %ld\n",n,Factorial(n));
  }
  else {
    long Factorial20=Factorial(20),tmp,index[SIZE];
    int i=0,j;
    // Store all Factorial20 to the array
    tmp=Factorial20;
    while (tmp > 0){
      index[i]=tmp%10;
      tmp=tmp/10;
      // printf("index[%d] = %ld , tmp = %ld\n",i,index[i],tmp);
      i++;
      j=i;
      // Error exception
      if (i >= SIZE){
        printf("SIZE is not large enough\n");
      }
    }

    // Print to verify
    printf("In index view is like \n");
    for (int i=j-1;i>=0;i--){
      printf("%ld",index[i]);
    }
  }
    // // Handling input value larger than 20
    // for (int i=21;i<=n;i++){
    //   i*Factorial20;
    // }
}
