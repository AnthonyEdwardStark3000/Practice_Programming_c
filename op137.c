#include<stdio.h>
int main(){
int a=1,b=1,c;
c = a++ + b;
// c = 1++ + 1
// c = 2+1
printf("%d, %d",a,b);
return 0;
}
