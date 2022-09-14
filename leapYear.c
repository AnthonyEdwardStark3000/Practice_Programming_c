#include<stdio.h>
#include<conio.h>
void main(){
int year;
printf("\nEnter an year:");
scanf("%d",&year);
if(year%400==0){
    printf("\nYear %d is a leap year",year);
}
else if(year%100==0){
    printf("\nYear %d is not a leap year",year);
}
else if(year%4==0){
    printf("\nYear %d is a leap year",year);
}
else
{
    printf("\nYear %d is not a leap year",year);
}
}
