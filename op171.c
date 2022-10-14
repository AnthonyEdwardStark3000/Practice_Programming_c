#include<stdio.h>
int main(){
int ai[]={10,20,30,40,50};
int *aptr[] = {ai,ai+1,ai+2,ai+3,ai+4};
int **dptr=aptr+2;
printf("%d %d",dptr-aptr,aptr[4]-ai);
return 0;
}

