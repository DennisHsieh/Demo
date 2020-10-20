#include <stdio.h>
#define LEN 5
int main(void){
  int arr[]={1,2,3,4,5};
  int* p=arr;
  for(int i=0;i<LEN;i++){
    printf("*(p+%d) = %d\n",i,*(p+i));
  }
  for(int i=0;i<LEN;i++){
    printf("*(arr+%d) = %d\n",i,*(arr+i));
  }

}
