#include<stdio.h>
#include<conio.h>
void main(){
int number1,number2,number3;
printf("\nEnter the first number:");
    scanf("%d",&number1);
printf("\nEnter the second number:");
    scanf("%d",&number2);
printf("\nEnter the third number:");
    scanf("%d",&number3);
if(number1%number2==0||number1%number3==0||number2%number3==0){
    printf("\nDivisible combinations");
}
else{
printf("\nNon Divisible combinations");
}
}
