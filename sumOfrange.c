#include<stdio.h>
#include<conio.h>
void main(){
int n,total=0;
printf("\nEnter the final number:");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
    total += i;
}
printf("\nThe sum between the numbers 0 and %d is : %d",n,total);
}
