#include<stdio.h>
int main(){
int arr[5] = {10,20,30,40,50};
int *ptr;
ptr= arr;
printf("%d\n",*++ptr+3);
printf("%d\n",*(ptr--+2)+5);
printf("%d\n",*(ptr+3)-10);
/*
    address 1000    1002    1004    1006    1008
    value   10      20      30      40      50

    ptr = arr
    so ptr stores the base address of the array (1000)
    * (++ptr) -> *(++1000) --> *(1002) // bcz incrementation in pointers will take place according to its data type size
    not by 1
     ==> 20 + 3 -> 23
     *(ptr-- +2)+5 -> *(1002-- + 2)+5
     ==> *(1002 + 2)+5 -> *(1002 + 2*2) + 5 => 40+5 -> 45


*/
return 0;
}
