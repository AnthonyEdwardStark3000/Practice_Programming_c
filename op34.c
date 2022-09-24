#include<stdio.h>
int main(){
    float me =1.375;
    double you =1.375;
    if(me==you){
        printf("\nMy principal is idiot");
    }
    else{
            printf("me = %d , you = %d", &me, &you);
        printf("\nPankaj is an idiot");
    }
return 0;
}
