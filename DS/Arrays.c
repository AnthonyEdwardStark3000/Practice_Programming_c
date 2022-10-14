#include<stdio.h>
void add(int num[], int n){
for(int i=0;i<n;i++)
{
    printf("\n%d",num[i]+1);
}
}
int main(){
int a[] = {1,2,3,4,5};
add(a,5);
printf("\n Inside main function : %d",a[0]);
return 0;
}
