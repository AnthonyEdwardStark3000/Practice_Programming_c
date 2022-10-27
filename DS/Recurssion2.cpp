#include<iostream>
using namespace std;
void number(int a){
    if(a>0){
        number(a-1);
        cout<<a<<"\t";
    }
}
int main(){
   int x =3;
   number(x);
   return 0;
}
