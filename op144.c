#include<stdio.h>
int main(){
int i=0;
for(i=0;i<20;i++){
    switch(i){
    // i =16
case 0:
    i+=5;
    //i =0 , i+=5, i=5
    // no break so continues with next case
    // 16!=0
case 1:
    i+=2;
    // i+=2
    // i = 5+2 => 7
    // 16!=1
case 5:
    i+=5;
    // i+= 5, i = 7+5 , => 12
    // 16!=5
default:
    i+=4;
    // i+=4 , 12+4 => 16
    // default block gets executed
    // i+=4, 16+4
    break;
    }
printf("%d ",i);
// 16
// 21
}
return 0;
}
