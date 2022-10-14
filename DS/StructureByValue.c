#include<stdio.h>
struct rectangle{
int length;
int breadth;
};

void area(struct rectangle r1){
printf("%d",r1.length * r1.breadth);
}

int main(){
struct rectangle r ={10,12};
area(r);
return 0;
}
