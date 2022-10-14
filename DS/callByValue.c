#include<stdio.h>
void check(int number1, int number2){
number1+=10;
number2+=20;
printf("Inside check function\n a:%d \t b:%d",number1,number2);
}
int main(){
int a=10,b=20;
check(a,b);
printf("\n a:%d\t b:%d",a,b);
return 0;
}
