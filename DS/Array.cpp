#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int b;
int A[10]={1,2,3};
cout<<"size of Array is:"<<sizeof(A)<<" bytes"<<endl;
for(int x:A){
//cout<<"A["<<i<<"]="<<A[i]<<endl;
cout<<x<<endl;
}
cout<<"Enter array size:";
cin>>b;
int B[b];
B[0]=100;
cout<<"Array 2:"<<endl;
for(int x:B){
 cout<<x<<endl;
}
return 0;
}
