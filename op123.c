#include<stdio.h>
int main(){
int i=0;
if(i==0){
    i=((5,(i=3)),i=1);
    printf("%d",i);
    // i = i=1;
    // i
}
else{
    printf("equal");
}
return 0;
}
