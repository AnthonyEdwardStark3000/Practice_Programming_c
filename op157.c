#include<stdio.h>
int main(){
int a[5] = {1,3,5,7,8};
int *ptr = (int*)(&a+1);
printf("%d",*(a+1) ** (ptr-1));
return 0;
}
