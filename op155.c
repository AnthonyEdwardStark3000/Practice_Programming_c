#include<stdio.h>
int main(){
int i=5, *ptr;
ptr = &i;
*ptr = 0;
printf("\n Number is :%d",i);
return 0;
}
