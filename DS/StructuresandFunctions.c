#include<stdio.h>
struct rectangle{
int length;
int breadth;
};

void initializeValue(struct rectangle *r,int len, int breadth){
r->length = len;
r->breadth = breadth;
}

int area(int len, int breadth){
return (len*breadth);
}

void changeVal(struct rectangle*r,int length){
r->length = length;
}

int main(){
struct rectangle r;
initializeValue(&r,10,20);
printf("\n%d , %d",r.length,r.breadth);
int a = area(r.length,r.breadth);
printf("\nArea is :%d",a);
changeVal(&r,120);
printf("\n%d , %d",r.length,r.breadth);
return 0;
}
