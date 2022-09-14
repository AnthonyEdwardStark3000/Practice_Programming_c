#include<stdio.h>
#include<conio.h>

void check(int number){
if(number==0){
    printf("\nNumber is 0");
}
else{
    printf("number is not zero");
}
}
void checker(int number1,int number2){
printf("\nNumber 1 is %d, Number 2 is %d",number1,number2);
}
void main(){
    int a=10;
    check(a);
    checker(1,6);
}
