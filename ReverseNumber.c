#include<stdio.h>
#include<conio.h>
void main(){
int number, reverseNumber=0;
printf("\nEnter the number:");
    scanf("%d",&number);
while(number>0){
    int tempNumber = number %10;
    reverseNumber= (reverseNumber*10)+tempNumber;
    number = number/10;
}
printf("\nThe reversed Number is : %d", reverseNumber);
}
