#include<stdio.h>
int main(){
int x;
x = 4%5 == 4%2+3;
/*
    Arithmetic operator have preference > relational operators.
    4 % 5 -> (4) == 4 %2 ->(0) +3
    4 == 3 -> (0)
*/
printf("X is :%d",x);
return 0;
}
