#include<stdio.h>
#define x 5+2  // Macro is not processed as 7 , it remains 5+2 here
int main(){
int i;
i = x*x*x;
// i = 5+2 * 5+2 * 5+2
// i = 5+10+10+2
printf("i is : %d",i); //27
return 0;
}
