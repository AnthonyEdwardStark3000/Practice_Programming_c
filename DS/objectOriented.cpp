#include<iostream>
using namespace std;
class Rectangle{
private:
    int length, breadth;
public:
Rectangle(int l, int b){
    length = l;
    breadth = b;
};
void area(){
cout<<"Area is :"<<length*breadth<<endl;
}

void perimeter(){
cout<<"Perimeter is :"<<2*(length+breadth)<<endl;
}
};
int main(){
Rectangle r(10,20);
r.area();
r.perimeter();
return 0;
}
