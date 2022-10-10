#include<stdio.h>
int main(){
int i=5;
printf("%d %d\n",i,i++);
//6 5++
printf("%d\n",i);
// 6
i = i++;
// i = 6++
printf("%d\n",i);
//6
return 0;
}
