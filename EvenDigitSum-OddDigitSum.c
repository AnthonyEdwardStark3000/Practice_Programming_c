#include<stdio.h>
#include<conio.h>
void main(){
int number,oddDigitSum=0,EvenDigitSum=0,temp=0;
printf("\nEnter the number:");
scanf("%d",&number);
while(number>0){
    temp=number%10;
    if(temp%2!=0){
        oddDigitSum+=temp;
    }else{
    EvenDigitSum+=temp;
    }
    number=number/10;
}
printf("\nThe difference between the even and odd numbers in the entered is: %d",EvenDigitSum-oddDigitSum);
}
