#include<stdio.h>
int main(){
    int a,x;
    a=5,x=a++;
    printf("\n%d %d",x,a);
    a=5, x=a--;
    printf("\n%d %d",x,a);
    a=5, x=--a;
    printf("\n%d %d",x,a);
return 0;
}
