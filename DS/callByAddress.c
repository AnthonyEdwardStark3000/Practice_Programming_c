#include<stdio.h>
void add(int *n1,int *n2){
*n1+=10;
*n2+=20;
}
int main(){
int a =10, b=20;
printf("a:%d, b:%d",a,b);
printf("\nAfter calling function\n");
add(&a,&b);
printf("a:%d, b:%d",a,b);
return 0;
}
