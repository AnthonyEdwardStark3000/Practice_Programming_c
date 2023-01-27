#include<iostream>
using namespace std;
int main(){
int a =100;
int &b = a;
cout<<"A:"<<a<<"\t"<<"B:"<<b<<endl;
int c = 90;
b=c;
cout<<"A:"<<a<<"\t"<<"B:"<<b<<"\t"<<"C:"<<c;
return 0;
}
