#include<stdio.h>
int main(){
int a,b;
a = 1,3,15;
// First value will only be taken
b=(2,4,6);
// b = the last value from the () will only be taken
printf("%d",a+b);
return 0;
}
