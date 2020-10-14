#include <stdio.h>
#include "Factorial.h"
#define SIZE 200
int n;
int main(){
  printf("Need to come up method to display 50! \n");
  // Use the code we write before Factorial.h
  printf("Fortunately, here is the solution.\n");
  printf("Input your number n:=");
  scanf("%d",&n);
  if (n<=12){
    printf("%d! = %d\n",n,Factorial(n));
  }
  else {
    int Factorial12=Factorial(12),tmp;
    int i=0,DIGIT=0,j=0,index[SIZE];
    for(int i=0;i<SIZE;i++){
      index[i]=0;
    }
    tmp=Factorial12;
    // Store all Factorial12 to the array
    while (tmp > 0){
      index[i]=tmp%10;
      tmp=tmp/10;
      // printf("index[%d] = %d , tmp = %d\n",i,index[i],tmp);
      i++;
      DIGIT=i;
      // Error exception
      if (i >= SIZE){
        printf("SIZE is not large enough\n");
      }
    }
    // Handling input value larger than 12
    printf("\n");
    for (int k=13;k<=n;k++){
      int carry=0,tmp1=0,i=0;
      // while (i<=DIGIT || carry==0){
      while ( carry!=0 || i<=DIGIT){
        tmp1=index[i];
        index[i]=(k*index[i]+carry)%10;
        // printf("index[%d] = %d\n",i,index[i]);
        carry=(k*tmp1+carry)/10;
        i++;
      }
      DIGIT=i-1;
    }
    printf("\n");
    // Print to verify 12!
    printf("Total digit is like \n");
    printf("%d! = ",n);
    for (int i=DIGIT;i>=0;i--){
      printf("%d",index[i]);
    }
    printf("\n");
  }
}
