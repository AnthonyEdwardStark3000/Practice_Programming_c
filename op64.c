#include<stdio.h>
int main(){
fun();
fun();
fun();

void fun(void){
static int a=5;
printf("a:%d\n", a+=2);
// 7, 9,11
}
return 0;
}
