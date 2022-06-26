#include<stdio.h>
#include<conio.h>
void main(){
float number;
printf("\nEnter the number:");
    scanf("%f",&number);
int tempnumber = number;
number = number-tempnumber;
printf("\nThe final result i.e the decimal part is: %.2f",number);
}
