#include<stdio.h>
int main(){
int a=1,b=2,c=3,d=4;
int x;
x = a=b=c=d;
// 4 = c = b = a
printf("%d",b);
return 0;
}
