#include<iostream>
using namespace std;
void add(int &n1, int &n2){
n1 += 100;
n2 += 100;
}
int main(){
int a=100,b=200;
cout<<"Before calling the function "<<endl<<"a :"<<a<<"b :"<<b<<endl;
add(a,b);
cout<<"a :"<<a<<"b :"<<b<<endl;
return 0;
}
