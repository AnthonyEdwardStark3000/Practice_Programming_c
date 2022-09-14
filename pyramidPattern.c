#include<stdio.h>
#include<conio.h>
void main(){
int n,blankspaces,currentValue=1;
printf("\nEnter n:");
scanf("%d",&n);
blankspaces = n-1;
for(int row=1;row<=n;row++){
    for(int k=blankspaces;k>=1;k--)
    {
        printf(" ");
    }
    for(int col=1;col<=row;col++){
        printf("%d ",currentValue);
        currentValue++;
    }
    printf("\n");
    blankspaces--;
}
}

