#include<stdio.h>
int main(){
int x=1,y=0,z=5;
int a=x&&y||z++;
// a = 0 || 5++
// a = 1
printf("%d",z);
//printf("%d",a);
// z - 6
}
