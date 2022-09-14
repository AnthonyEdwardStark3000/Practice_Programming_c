#include<stdio.h>
#include<conio.h>
void main(){
int n;
printf("\nEnter the number of rows:");
scanf("%d",&n);
for(int row=0;row<=n;row++){
    for(int col=1;col<=row;col++)
    {
        printf("%d",col);
    }
    printf("\n");
}
}
