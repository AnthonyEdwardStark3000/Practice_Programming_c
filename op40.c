#include<stdio.h>
int main(){
int i,c=0,n=7;
for(i=0;i<=n;i++){
    if(n%i==0){ //1,7
        c++;
    }
}
if(c==2){
    printf("Prime");
}
else
{
printf("Not prime");
}

return 0;
}
