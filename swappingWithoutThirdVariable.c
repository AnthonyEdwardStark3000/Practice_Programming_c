#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
printf("\nEnter number 1:");
scanf("%d",&a);
printf("\nEnter number 2:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
}
