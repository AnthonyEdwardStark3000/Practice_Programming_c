#include<stdio.h>
int main(){
int x=10, y=15;
if(++x>10&&++y>15){
        //11 < 10 (T) and 16 > 15
    x++; // 11 ++
}
else{
    y++;
}
printf("x: %d, y: %d",x,y); //12 ,16
return 0;
}
