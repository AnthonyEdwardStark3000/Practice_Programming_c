#include<iostream>
using namespace std;

class Rectangle{
private:
int length;
int breadth;

public:
void readValues(){
cout<<"Enter length and breadth :"<<endl;
cin>>length>>breadth;
}

int area(){
    return length*breadth;
}
};
int main(){
Rectangle r;
r.readValues();
cout<<"The area is :"<<r.area();
}

