#include<stdio.h>
void display(){
printf("\nHello");
display();
}
int main(){
display();
return 0;
}
