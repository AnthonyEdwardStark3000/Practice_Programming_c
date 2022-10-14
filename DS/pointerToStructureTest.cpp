#include<iostream>
struct Rectangle{
int length;
int breadth;
};
using namespace std;

int main(){
//normal method to access data member
Rectangle r = {10,20};
cout<<r.length<<endl<<r.breadth<<endl;
//accessing using pointer
Rectangle *p = &r;
p->length=180;
p->breadth=220;
cout<<r.length<<endl<<r.breadth<<endl;
//storing the structure in heap
struct Rectangle *h;
h = (struct Rectangle*)malloc(sizeof(struct Rectangle));
h->length =300;
h->breadth =189;
cout<<h->length<<endl<<h->breadth<<endl;
return 0;
}
