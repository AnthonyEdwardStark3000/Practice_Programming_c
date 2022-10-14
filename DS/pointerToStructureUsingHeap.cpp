#include<iostream>
struct Rectangle{
int length;
int breadth;
};
using namespace std;
int main(){
struct Rectangle *r;
r = (struct Rectangle *)malloc(sizeof(struct Rectangle));
r -> length =120;
r -> breadth =130;
cout<<r->length<<endl<<r->breadth<<endl;
return 0;
}
