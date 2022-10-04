#include<stdio.h>
int main(){
int x,y;
for(x=5;x>=1;x--){
        //5
        //4
        //3
        //2
        //1
    for(y=1;y<=x;y++){
        //1,2,3,4,5
        //1,2,3,4
        //1,2,3
        //1,2
        //1
        printf("\n%d",y);
    }
}
return 0;
}
