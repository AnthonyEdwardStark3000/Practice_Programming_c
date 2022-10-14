#include<iostream>
struct rectangle{
int length;
int breadth;
};

using namespace std;
int main(){
struct rectangle r = {10,20};
struct rectangle *p = &r;
cout<<r.length<<endl<<r.breadth<<endl;
cout<<"changing the value inside structure"<<endl;
(*p).length= 100;
(*p).breadth= 100;
cout<<r.length<<endl<<r.breadth<<endl;
cout<<"changing the value inside structure using arrow operator"<<endl;
p->length = 200;
p->breadth = 200;
cout<<r.length<<endl<<r.breadth<<endl;
return 0;
}
