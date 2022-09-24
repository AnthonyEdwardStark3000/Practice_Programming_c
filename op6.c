#include<stdio.h>
int main(){
int a=7;
switch(a){
 case 1:
 case 5:
 case 6:
    printf("\nHyderabad");
    break;
 case 2:
    printf("\Bangalore");
    break;
 case 3:
 case 7:
 case 10:
    printf("\nChennai");
    break;
 default:
    printf("\nDefault");
}
}
