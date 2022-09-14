#include<stdio.h>
#include<conio.h>
void main(){
int grade;
do{
    printf("Please enter a grade between 0 - 100:");
    scanf("%d",&grade);
}while(grade<0 || grade>100);
printf("Entered legit value");
}
