#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
int number,sqr,four,six;
printf("\nEnter the number:");
scanf("%d",&number);
sqr= pow(number,2);
printf("\nEnter the square of the number %d is :%d",number,sqr);
four= pow(number,4);
printf("\nEnter the power 4 of the number %d is :%d",number,four);
six= pow(number,6);
printf("\nEnter the power 6 of the number %d is :%d",number,six);
}
