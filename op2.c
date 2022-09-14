#include<stdio.h>
int main(){
int n =65;
switch(n){
case 64:
    printf("case 64\n");
    break;
case 'A':
    printf("case A\n"); // ASCII value of 'A' is 65
    break;
default:
    printf("Default case");
}
return 0;
}
