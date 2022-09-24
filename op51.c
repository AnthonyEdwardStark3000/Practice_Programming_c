#include<stdio.h>
int main(){
int a,b;
a = (3+2, b = a,12);
/*
a = (3+2, b= no_assignment for a so garbage value, 12)
a = (5, b =g.v,12)
a = 12, b = g.v
*/
printf("a :%d, b: %d",a,b);
return 0;
}
