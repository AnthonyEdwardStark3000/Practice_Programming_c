#include<stdio.h>
#include<stdlib.h>
void main(){
int grade;
int totalSum=0, gradesCount=0;
printf("\nPlease enter your grade to continue or -1 to stop:");
scanf("%d",&grade);
while(grade!=-1)
{
    totalSum+=grade;
    gradesCount++;
printf("\nPlease enter your grade to continue or -1 to stop:");
scanf("%d",&grade);
//printf("\n%d",totalSum);
}
printf("\nThe average of the grades entered is: %.2f and the count of grades entered is: %d",(float)totalSum/gradesCount,gradesCount);
}
