#include<stdio.h>
int main(){
int i = 0;

printer:{
if(i<=10){
    printf("\n%d",i);
    i++;
    goto printer;
}
else{
    printf("\nThank you.");
}
}

return 0;
}
