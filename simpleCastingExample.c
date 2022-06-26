#include<stdio.h>
#include<conio.h>
void main(){
float g1,g2,g3;
printf("\nEnter your grades in three subjects:\n");
scanf("%f%f%f",&g1,&g2,&g3);
printf("%.2f",(g1+g2+g3)/3);
}
