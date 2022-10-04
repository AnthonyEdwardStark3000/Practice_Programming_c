#include<stdio.h>
int main(){
static int i; // static variables by default gets assigned with value 0.
int j;
for(j=0;j<10;j++){
    i+=2;
    i-=j;
}
printf("%d",i);
return 0;
}
