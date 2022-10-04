#include<stdio.h>
int main(){
int c=2,d=5,e=10,a;
//a = 2>1 ->5>1 || 10>1  = >100
a = c>1?d>1||e>1?100:200:300;
printf("\n A =%d",a);
return 0;
}
