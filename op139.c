#include<stdio.h>
int main(){
int x =2, y=0;
int z = (y++) ? y==1&&x : 0;
// z - (0++) ? ---- : 0 (gets executed)
printf("%d\n",z);
return 0;
}
