#include<stdio.h>
int main(){
int i=100;
int *ip1, *ip2;
ip1 = &i;
ip2 = ++ip1;
--ip1;
printf("%u", ip2-ip1);
/*
i = 100;

1000    2000    3000
i       ip1      ip2
100    1000(&i)  1004(++ip1) as in memory incrementation takes place in respect to the size of the data type.
       --ip1
{1004 - 1000} => 4 bytes = 1
*/
return 0;
}
