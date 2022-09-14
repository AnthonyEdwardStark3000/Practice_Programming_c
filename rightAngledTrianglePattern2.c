#include<stdio.h>
#include<conio.h>
void main(){
int n;
printf("\nEnter the number of rows you want to print :");
scanf("%d",&n);
for(int row=1;row<=n;row++)
{
    for(int col=1;col<=row;col++){
        printf("%d",row);
    }
    printf("\n");
}
}
