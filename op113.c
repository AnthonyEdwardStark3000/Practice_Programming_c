#include<stdio.h>
int main(){
int a=10, b=2,c;
//a - 10
//b - 2
//c - garbage
a =!(c=c==c)&&++b;
// a - !(1)&&2
// a - 0
c+=(a+b--);
// c = 1+(0+2)
// c - 3
printf("%d %d %d",b,c,a);
// b -1
return 0;
}
