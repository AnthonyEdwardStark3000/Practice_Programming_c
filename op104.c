#include<stdio.h>
struct temp{
int a[10];
char c;
};
int main(){
struct temp t;
printf("\n%d", sizeof(t));
return 0;
}
