#include<stdio.h>
void func(){
int x=0;
static int y =0;
x++;y++;
printf("%d -- %d\n",x,y);
// 1--1
// 1--2
}

int main(){
func();
func();
return 0;
}
