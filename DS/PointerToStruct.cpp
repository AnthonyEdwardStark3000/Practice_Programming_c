#include<iostream>
using namespace std;
struct Rectangle{
int l;
int b;
};
int main(){
struct Rectangle *r=(struct Rectangle*)malloc(sizeof(struct Rectangle));
r->l =100;
r->b =200;
cout<<"Length :"<<r->l<<endl<<"Breadth :"<<r->b<<endl;
return 0;
}
