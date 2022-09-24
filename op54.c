#include<stdio.h>
int main(){
int a =35,b=15, c=25,d,e;
d = a >c >b;
/*d = 35 > 25 > 15
     => 1 > 15
       - > False (0)
       d = 0
  e = 25-15 >= 35<= 0
        10 >= 0
         => 1
*/
e = c-b >a<=d;
printf("%d,%d",d,e);
return 0;
}
