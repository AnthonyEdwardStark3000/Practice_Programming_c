#include<stdio.h>
void func(int);
int main(){
int x=2;
func(x++);
// func(2)
return 0;
}

void func(int x){
    // x : 2
printf("x value is :%d",x++);
}
