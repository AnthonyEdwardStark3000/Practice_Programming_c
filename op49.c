#include<stdio.h>
int main(){
int x =3, y=3;
while(--x&&--y){
        /*
        --3,--3 => 2 && 2 => true
        --2,--2 => 1 && 1 => true
        --1,--1 => 0 && 0 => false terminates
        */
    printf("\n x: %d, y: %d",x,y);
//2,2
//1,1
}
return 0;
}
