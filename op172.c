#include<stdio.h>
int main(){
int num[]={1,4,8,12,16};
int *a,*b;
int i;
a=num;
// takes the address of num[0]
b=num+2;
// takes the address of num[2]
i=*a+1;
// i = *(a)+1
// i = 1+1
printf("%d %d %d",i,*a,*b);
// 2 1 8
return 0;
}
