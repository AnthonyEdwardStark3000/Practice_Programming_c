#include<stdio.h>
int main(){
char *str ="geeksforgeeks";
printf("%c\n",*((str-- +2)+1)-3);
printf("%c\n",*(--str +3)-32);
printf("%c\n",*(++str+2)+4);
/*
1000 1001 1002 1003 1004 1005
g      e   e     k    s    \0

str = 1000
999
998
*((str-- +2)+1)-3
// 1000+2 -> *((1002)+1) == k-3
    = > h
*(--str +3)-32
 = *(998 +3)-32
 = *(1001)-32
 = e - 32
 = E

 *(++str +2)+4
    = *(999+2) + 4
    =  e + 4
    = i

*/
return 0;
}
