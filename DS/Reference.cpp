#include<iostream>
using namespace std;
int main(){
int a =20;
int &b =a;
int c =30;
b=c;
cout<<"A :"<<a<<endl<<"B :"<<b<<endl<<"C :"<<c<<endl;
cout<<"Addresses :"<<endl;
cout<<"A :"<<&a<<endl<<"B :"<<&b<<endl<<"C :"<<&c<<endl;
return 0;
}
