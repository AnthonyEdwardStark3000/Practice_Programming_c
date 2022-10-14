#include<stdio.h>
void check(int numbers[]){
int len = sizeof(numbers)/sizeof(int);
printf("\n%d",sizeof(int));
printf("\nInside the function check :%d",len);
}
int main(){
int numbers[] ={1,2,3,5,4};
int len = sizeof(numbers)/sizeof(int);
printf("\nInside main function :%d",len);
check(numbers);
return 0;
}
