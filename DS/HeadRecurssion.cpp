#include<iostream>
using namespace std;
void func(int number){
if(number>0){
    func(number-1);
    cout<<number<<"\t";
}
}
int main(){
int x = 3;
cout<<"Head recursion"<<endl;
func(x);
return 0;
}

