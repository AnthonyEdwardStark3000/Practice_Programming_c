#include<iostream>
using namespace std;

class Rectangle{
private:
int length =0, breadth=0;

public:
Rectangle(){
cout<<"Default constructor"<<endl;
};

Rectangle(int l, int b){
length = l;
breadth = b;
}

int getLength(){
return length;
}

int getBreadth(){
return breadth;
}

void area(){
cout<<"Area is:"<<(length*length)<<endl;
}
};

int main(){
Rectangle r1;
cout<<"Before initialization :\n"<<"Length :"<<r1.getLength()<<endl<<"Breadth :"<<r1.getBreadth()<<endl;
Rectangle r(10,123);
cout<<"After initialization :\n"<<"Length :"<<r.getLength()<<endl<<"Breadth :"<<r.getBreadth()<<endl;
cout<<"Area calculation :\n";
r.area();
return 0;
}
