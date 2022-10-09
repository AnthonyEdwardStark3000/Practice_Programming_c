#include<stdio.h>
int main(){
int i=5,j=-2,k=0,w,x,y,z;
w = i||j||k;
// 5 || -2  || 0
//w = 1
x = i && j && k;
// x = 0
y = i||j&&k;
// y = 5 || -2 && 0
// y = 1
z = i&&j||k;
// z = 5 &&-2 || 0
//z = 1
printf("W:%d, X:%d, Y:%d, Z:%d\n",w,x,y,z);
return 0;
}
