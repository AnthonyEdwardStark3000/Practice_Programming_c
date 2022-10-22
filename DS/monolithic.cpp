#include<iostream>
using namespace std;
int main(){
int len =0, breadth =0,area=0,peri=0;
cout<<"Enter length and breadth :"<<endl;
cin>>len>>breadth;
area = len*breadth;
peri = 2*(len+breadth);
cout<<"Area is:"<<area<<endl;
cout<<"Perimeter:"<<peri<<endl;
return 0;
}
