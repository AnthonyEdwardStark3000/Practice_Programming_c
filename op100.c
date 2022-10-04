#include<stdio.h>
int main(){
int a=10;
if(printf("\n%d",a)){
  printf("%d",a);
}
else{
  printf("%d %d",a,a);
}
return 0;
}
