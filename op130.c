#include<stdio.h>
int main(){
int c;
c=printf("%d",printf("%d",printf("1234")));
//1234 gets printed
//4 is returned and printed
// size of 4 is 1
//finally 1 gets printed.
return 0;
}
