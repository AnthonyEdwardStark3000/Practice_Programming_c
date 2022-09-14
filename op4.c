#include<stdio.h>
int main(){
int i=65;
switch(i)
{
case 65:
    printf("Int 65");
    break;
case 'A':
    printf("Char 65");
    break;
default:
    printf("Default");
}
return 0;
}
