#include<stdio.h>
int main(){
int a[]={6,2,8,4,9},*p,n;
p=a+2;
n=*p;
printf("\nOutput 1:%d",n);
n=*++p;
printf("\nOutput 2:%d",n);
n=*(--p);
printf("\nOutput 3:%d",n);
n=*p--;
printf("\nOutput 4:%d",n);
n=(*p)++;
printf("\nOutput 5:%d",n);
n=++(*p);
printf("\nOutput 6:%d",n);
n=--*p;
printf("\nOutput 7:%d",n);
n=*(++p);
printf("\nOutput 8:%d",n);
return 0;
}
