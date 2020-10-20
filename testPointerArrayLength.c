#include <stdio.h>
int main(void){
  int arr[]={1,2,3,4,5};
  int len = *(&arr+1)-arr;
  int* p = arr;
  printf("&arr = %p\n",&arr);
  // printf("&arr+1 = %p\n",&arr+1);
  // printf("*(&arr) = %d\n",*(&arr));
  // printf("*(&arr+1) = %d\n",*(&arr+1));
  // printf("arr = %d\n",arr);
  printf ("Len = %d\n",len);
}
