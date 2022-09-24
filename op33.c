#include<stdio.h>
int main(){
    int x=2;
    printf("%d,%d,%d",x*x,++x,x++);
    // Operation happens from right to left
    // 2 ++, ++3, 4*4
    //16 , 4, 2
return 0;
}
