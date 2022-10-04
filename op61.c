#include<stdio.h>
union un{
short int a;
char ch[2];
};
int main(){
union un u;
u.ch[0] = 2;
u.ch[1] = 3;
printf("a: %d\n",u.a);
return 0;
}
