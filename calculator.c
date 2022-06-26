#include<stdio.h>
#include<conio.h>
void main(){
char operation;
int number1, number2;
printf("\nEnter the number one:");
scanf("%d",&number1);
printf("\nEnter the number two:");
scanf("%d",&number2);
printf("\nEnter the operation you need to perform:");
scanf("%s",&operation);
switch(operation){
case '+':
    printf("\nThe final result is:%d",number1+number2);
    break;
case '-':
    printf("\nThe final result is:%d",number1-number2);
    break;
case '*':
    printf("\nThe final result is:%d",number1*number2);
    break;
case '/':
    printf("\nThe final result is:%d",number1/number2);
    break;
default:
    printf("\nEnter valid operation");
}
}
