#include<stdio.h>
#include<conio.h>
void main(){
int number,totalNumber=0;
printf("\nEnter the number:");
    scanf("%d",&number);
while(number>0){
    int tempNumber = number%10;
    totalNumber+= tempNumber;
    number=number/10;
}
printf("\nSum of the digits of the entered number %d is :%d",number,totalNumber);
}
