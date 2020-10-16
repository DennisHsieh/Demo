#include <stdio.h>
int Multiply(int , int);
int main(){
	int ANS,(*p)(int x, int y);
	p=Multiply;
	ANS=Multiply(3,4);
	printf("ANS = %d\n",ANS);
}
int Multiply(int x, int y){
	return x*y;
}
