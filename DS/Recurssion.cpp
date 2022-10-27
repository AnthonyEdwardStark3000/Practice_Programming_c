#include<iostream>
using namespace std;
void number(int a){
    if(a>0){
        cout<<"A is :"<<a<<endl;
        number(a-1);
    }
}
int main(){
int x =3;
cout<<"Calling the function using recursion"<<endl;
number(x);
return 0;
}
