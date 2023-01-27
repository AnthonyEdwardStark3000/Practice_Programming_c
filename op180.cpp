#include<iostream>
using namespace std;

int jumble(int x,int y){
x=2*x+y;
// 2*5+2 -> 12
// 2*12+2 -> 26
return x;
}

int main(){
int x=2,y=5;
y=jumble(y,x);
// 5,2
// y= 12
x=jumble(y,x);
// 12,2
// x = 26
cout<<x<<endl;
return 0;
}
