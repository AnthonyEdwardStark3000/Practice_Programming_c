#include<stdio.h>
int main(){
char x = 120;
while(++x > 10 || ++x >=-128){
    printf("%d\t",x);
}
return 0;
}
