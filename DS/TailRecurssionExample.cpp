#include<iostream>
using namespace std;
void func(int number){
if(number>0){
    cout<<number<<"\t";
    func(number-1);
}
}
int main(){
int x = 3;
cout<<"Tail recursion"<<endl;
func(x);
return 0;
}
