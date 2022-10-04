#include<stdio.h>
int main(){
int a[5] = {5,1,15,20,25};
int i,j,m;
i = ++a[1];
// i = 2
j = a[1]++;
// j = 1
m = a[i++];
// m = 15
printf("i:%d ,j:%d, m:%d",i,j,m);
return 0;
}
