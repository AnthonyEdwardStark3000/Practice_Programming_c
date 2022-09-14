#include<stdio.h>
#include<conio.h>
void main(){
int n,count=0;
int i=1;
printf("\nEnter the count of numbers:");
scanf("%d",&n);
while(count<n)
{
    if(i%2==0)
    {
        printf("%d ,",i);
        count++;
    }
    i++;
}
}
