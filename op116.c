#include<stdio.h>
int main(){
int i=3;
int j=3;
printf("%d%d%d",i++,i,++i);
printf("\n%d%d%d",--i,i,i--,i++);
// 2 3 4-- 3++
// 2 3 4
return 0;
}
