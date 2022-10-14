#include<stdio.h>
int array[]={1,2,3,4,5,6,7,8};
#define SIZE sizeof(array)/sizeof(int)

int main(){
printf("%d",SIZE);
if(-1<=SIZE){
    printf("\n1");
}
else{
    printf("\n2");
}
return 0;
}
