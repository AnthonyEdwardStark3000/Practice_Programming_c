#include<stdio.h>
struct rectangle{
int length;
int breadth;
};

void addition(struct rectangle &r1){
    r1.length +=100;
    r1.breadth +=100;
}

int main(){
struct rectangle r ={10,12};
printf("\n length :%d, breadth: %d",r.length,r.breadth);
addition(r);
printf("\n length :%d, breadth: %d",r.length,r.breadth);
return 0;
}

