#include<stdio.h>
#include<conio.h>
void main(){
int a,b,temp;
printf("\nEnter number 1:");
scanf("%d",&a);
printf("\nEnter number 2:");
scanf("%d",&b);
temp = a;
a = b;
b=temp;
printf("A is %d, b is %d",a,b);
}
