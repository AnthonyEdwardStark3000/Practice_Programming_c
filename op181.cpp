#include<iostream>
using namespace std;

int jumble(int &x,int &y){
x=2*x+y;
// x = 2*2+5 = > 9
// x = 2*9+9 = > 27
return x;
}

int main(){
int x =2,y=5;
//2,5
y=jumble(x,y);
// y = 9
x=jumble(x,y);
//9,9
// x = 27
cout<<x<<endl;
return 0;
}

