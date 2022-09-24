#include<stdio.h>
int main(){
int a =10;
printer:
    {
        if (a){
            printf("Hi");
            goto printer;
        }
    }
return 0;
}
