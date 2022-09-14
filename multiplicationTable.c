#include<stdio.h>
#include<conio.h>
void main(){
int n,total;
printf("\nEnter the table number:");
scanf("%d",&n);

printf("\nEnter the table count:");
scanf("%d",&total);

for(int i=1;i<=total;i++)
{
printf("\n%d * %d = %d",n,i,(n*i));
}
}
