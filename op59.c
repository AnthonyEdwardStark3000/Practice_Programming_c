#include<stdio.h>
int main(){
abc(3);
return 0;
}

void abc(int a){
printf("%d\t",a);
//3 2 1 0 0 1 2 3
if(a){
    abc(a-1);
}
printf("%d\t",a);
}

