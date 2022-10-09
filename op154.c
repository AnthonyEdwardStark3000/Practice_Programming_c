#include<stdio.h>
int main(){
char *p = "Mr.Stark";
int *q;
p++;
q = (int*)p;
q++;
printf("\n%s\n%s",p,q);
return 0;
}
