#include <stdio.h>
#include "Factorial.h"
#define SIZE 200
long n;
int main(){
  printf("Need to come up method to display 50!= \n");
  // Use the code we write before Factorial.h
  printf("Input your number n:=");
  scanf("%ld",&n);
  if (n<=20){
    printf("%ld! = %ld\n",n,Factorial(n));
  }
  else {
    long Factorial20=Factorial(20),tmp,index[SIZE];
    int i=0,DIGIT,j;
    for(int i=0;i<SIZE;i++){
      index[i]=0;
    }
    // Store all Factorial20 to the array
    tmp=Factorial20;
    while (tmp > 0){
      index[i]=tmp%10;
      tmp=tmp/10;
      // printf("index[%d] = %ld , tmp = %ld\n",i,index[i],tmp);
      i++;
      DIGIT=i;
      // Error exception
      if (i >= SIZE){
        printf("SIZE is not large enough\n");
      }
    }
    // Handling input value larger than 20

    for (int k=21;k<=n;k++){
      int carry=0,tmp=0,i=0;
      // while (i<=DIGIT || carry==0){
      while (i<=100){
        tmp=index[i];
        index[i]=(k*index[i]+carry)%10;
        carry=(k*tmp+carry)/10;
        i++;
        // j=i;
      }
    }
    // Print to verify 20!
    printf("In index view is like \n");
    for (int i=100;i>=0;i--){
      printf("%ld",index[i]);
    }
  }
}
