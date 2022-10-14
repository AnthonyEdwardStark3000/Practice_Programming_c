#include<iostream>
using namespace std;

int * arraycreator(int num){
int *p;
p = new int[num];
for(int i=0;i<num;i++){
    p[i] = i+100;
}
return p;
}

int main(){
int *ptr,length =5;
ptr = arraycreator(length);
for(int i=0;i<length;i++){
    cout<<ptr[i]<<endl;
}
return 0;
}

