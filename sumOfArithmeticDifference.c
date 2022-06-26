#include<stdio.h>
#include<conio.h>
void main(){
int starting,ending,totalNumbers,sum=0;
printf("\nEnter the starting number:");
    scanf("%d",&starting);
printf("\nEnter the ending number:");
    scanf("%d",&ending);
printf("\nEnter the total numbers:");
    scanf("%d",&totalNumbers);
sum = (starting + ending)*totalNumbers/2;
printf("\nThe sum of the entered number series is : %d",sum);
}
