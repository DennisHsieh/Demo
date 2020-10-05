#include <stdio.h>
#include <stdlib.h>
double EXP(double,int);
int main(){
  int n;
  printf("Input polynomial highest degree =");
  scanf("%d",&n);
  double ConstArray[n],x,SUM=0;
  for(int i=n;i>=0;i--){
    printf("Input constant of degree %d is =",i);
    scanf("%lf",&ConstArray[i]);
  }
  printf("Input x variable = ");
  scanf("%lf",&x);
  for(int i=n;i>=0;i--){
    SUM+=ConstArray[i]*EXP(x,i);
  }
  printf("f(x) = %f\n",SUM);
}
double EXP(double x,int i){
  double tmp=1;
  for (int j=0;j<i;j++){
    tmp*=x;
  }
  return tmp;
}
