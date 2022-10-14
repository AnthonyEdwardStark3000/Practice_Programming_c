#include<stdio.h>
int main(){
int a=10,b;
if(a == a--){
        // a--
        //9 == 10
    printf("true");
    printf("%d",a);
}
a=10;
if(a == --a){
    //a== --a
    //9 == 9
    printf("false");
    printf("%d",a);
}
return 0;
}
