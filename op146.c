#include<stdio.h>
int main(){
char p;
char b[10] = {1,2,3,4,5,6,9,8};
p = (b+1)[5];
printf("%d",p);
return 0;
}
