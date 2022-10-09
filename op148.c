#include<stdio.h>
int main(){
char s[100];
int i,j;
gets(s);
i=printf("%s",s);
j=printf("hello\n");
// i = 7
// j = 6
printf("i : %d,j : %d",i,j);
return 0;
}
