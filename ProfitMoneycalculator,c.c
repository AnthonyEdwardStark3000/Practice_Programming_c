#include<stdio.h>
#include<conio.h>
void main(){
int instantMoney = 1000000;
float total_amount =0.01;
for(int i=0;i<30;i++)
{
    total_amount = total_amount*2;
}
printf("\nThe total amount after 30 days is : %f", total_amount);
}
