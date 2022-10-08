#include<stdio.h>
int main(){
int i=1;
if(i++ && (i==1)){
    printf("Yes\n");
}
else{
    printf("No\n");
}
return 0;
}
