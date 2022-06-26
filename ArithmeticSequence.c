//Write a program that calculates and prints nth term.
//an = a1+(n-1)*d;

#include<stdio.h>
#include<conio.h>
void main(){
    int a1,d,n;
    printf("\nEnter the starting number:");
    scanf("%d",&a1);
    printf("\nEnter the difference between numbers:");
    scanf("%d",&d);
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    printf("\nThe n th number will be: %d",a1+(n-1)*d);
}
