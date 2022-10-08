#include<stdio.h>
int main(){
int y=1,x=0;
int l=(y++,x++)?y:x;
// l = (1++,o++) ? 1:0
// l =1
printf("%d\n",l);
}
