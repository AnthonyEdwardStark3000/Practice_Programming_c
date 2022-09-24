#include<stdio.h>
int main(){
int i=2,j=2;
while(i+1?--i:--j){
  /*
    2+1 ?--i
     => true , so --i
        i become 1
    1+1 -> 2 (true) so --i
        i become 0
    so it makes while(0 (false)), so the printf will not be executed.
  */
    printf("%d\n",i);
}
return 0;
}
