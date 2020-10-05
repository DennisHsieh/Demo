#include<stdio.h>
#include<stdlib.h>
void cmove(int ,char,char,char);
int main(void){
	int n;
  printf("Input n=");
	scanf("%d",&n);
	cmove(n,'a','b','c');
}
void cmove (int n,char a,char b, char c){
	static int times=0;
  printf("times now is =%d\n", times);
	if(n==1){
		times++;
	printf("%d times: Move %d from tower %c to %c\n",times,1,a,c);
	}
	else{
	cmove(n-1,a,c,b);
	times++;
	printf("%d times: Move %d from tower %c to %c\n",times,n,a,c);
	cmove(n-1,b,a,c);
	}
}
