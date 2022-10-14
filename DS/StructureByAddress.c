#include<stdio.h>
struct rectangle{
int length;
int breadth;
};

void area(struct rectangle *r1){
r1->length += 100;
r1->breadth += 100;
}

int main(){
struct rectangle r ={10,12};
area(&r);
printf("%d, %d",r.length, r.breadth);
return 0;
}

