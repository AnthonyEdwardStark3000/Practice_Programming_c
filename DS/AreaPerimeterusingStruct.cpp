#include<iostream>
using namespace std;

struct Rectangle {
int length;
int breadth;
};

int area(struct Rectangle r){
return (r.length * r.breadth);
}

int main(){
struct Rectangle r ={0,0};
cout<<"Enter length and breadth :"<<endl;
cin>>r.length>>r.breadth;
int a = area(r);
cout<<"Area is :"<<a<<endl;
return 0;
}
