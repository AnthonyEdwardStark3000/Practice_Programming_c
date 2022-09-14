#include<stdio.h>
#include<conio.h>
void main(){
int number,count;
printf("\nEnter the number:");
    scanf("%d",&number);
while(number>0){
    number=number/10;
    count++;
}
if(count==2){
    printf("The number %d is an two digit number",number);
}
else if(count==3){
    printf("The number %d is an three digit number",number);
}
else
    printf("The number %d is neither an two digit nor a three digit number",number);
}
