#include<stdio.h>
int main(){
static int i; //static variables get initialized with 0
printf("%d",i);
return 0;
}
