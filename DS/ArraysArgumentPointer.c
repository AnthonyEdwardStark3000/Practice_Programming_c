#include<stdio.h>
void check(int *arr,int len){
for(int i=0;i<len;i++){
    printf("%d\n",arr[i]+100);
}
}
int main(){
int a[] = {1,2,3,4,5};
int len = sizeof(a)/sizeof(int);
check(a,len);
return 0;
}
