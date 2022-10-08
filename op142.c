#include<stdio.h>
int main(){
int i=10;
static int x = i;
if(x==i){
    printf("equal");
}
else if(x>i){
    printf("Greater")
}
else{
    printf("Less than");
}
return 0;
}
