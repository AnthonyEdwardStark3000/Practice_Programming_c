#include<stdio.h>
#include<conio.h>
void main(){
int size,previousValue=0,currentValue=0,VeryAscendingFlag=1;
printf("\nEnter the size of the sequence: ");
scanf("%d",&size);
if(size<=0){
    printf("\nSorry enter some high value");
}else{
do{
    printf("\nEnter value:");
    scanf("%d",&currentValue);

    if(currentValue<0){
        printf("\nNumber isn't positive");
    }
    else{
        if(currentValue<=previousValue){
            VeryAscendingFlag = 0;
            previousValue=currentValue;
        }
            size--;
    }
}while(size>0);
if(VeryAscendingFlag==1)
    {
    printf("\nThe entered sequence is an very ascending number");
    }
else{
    printf("\nThe entered sequence is not an very ascending number");
}
}

}
