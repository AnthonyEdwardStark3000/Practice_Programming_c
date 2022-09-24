#include<stdio.h>
int main(){
char sport[] = "cricket";
int x =1,y;
y = x++ + ++x;
// 1++ + ++2 => 1 + 3
// y =4
printf("character I want to print is : %c", sport[++y]);
//++4 -> 5
return 0;
}
