#include<stdio.h>
int call(int address){
address++;
return address;
}

int main(){
static main;//0
int x;
x = call(main); //1
printf("%d",x);
getch();
return 0;
}
