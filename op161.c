#include<stdio.h>
int main(){
int a,b,c;
char op;
printf("Enter a, b :");
scanf("%d%d",&a,&b);
printf("Enter option :");
scanf(" %c",&op);
switch(op){
case '+':c=a+b;printf("sum=%d",c);break;
case '-':c=a-b;printf("diff=%d",c);break;
case '*':c=a*b;printf("prod=%d",c);break;
case '/':c=a/b;printf("div=%d",c);break;
case '%':c=a%b;printf("remainder=%d",c);break;
case '\n':c=(a+b)+(a*b);printf("\n unexpected '\\n' case: %d",c);break;
default:printf("invalid option");
}
return 0;
}
