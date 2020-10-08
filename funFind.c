#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main(){
  int key,ans=-1,a[SIZE];
  // Give all value from 1 to 10 randomlly to this SIZE of data.
  srand(time(NULL));
  for (int i=0;i<SIZE;i++){
    a[i]=rand()%10+1;
    // printf("a[%d]=%d ",i,a[i]);
  }
  // There are many number from 1 to 10, choose which number you want to find out and output them.
  printf("Please input value (1~10) you want to search");
  scanf("%d",&key);
  // Start Finding
  for (int i=0;i<SIZE;i++){
    if (a[i]==key){
      ans=i;
      printf("%d found at a[%d]=%d\n",key,ans,a[ans]);
    }
  }
  if (ans==-1){
      printf("%d not found\n",key);
  }
}
