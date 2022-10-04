#include<stdio.h>
void display(int);
int main(){
display(60);
display(80);
display(40);
display(70);
display(20);
return 0;
}

void display(int n){
static int p; // p =0
p++; // 0++ ->1
p=6; // p =6
printf("\n p Value :%d\t n value :%d",p,n);
}

