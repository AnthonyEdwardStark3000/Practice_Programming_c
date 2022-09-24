#include<stdio.h>
int main(){
int x=10,y=15;
if(++x<10||++y>15){
   // 11< 10 (F) || 16> 15 (T)
    x++; // 12
}
else{
    y++;
}
printf("x:%d, y:%d",x,y); // 12, 16
}

