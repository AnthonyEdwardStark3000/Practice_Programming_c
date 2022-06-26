#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
int x1,x2,y1,y2;
float answer;
printf("\nEnter x1:");
    scanf("%d",&x1);
printf("\nEnter x2:");
    scanf("%d",&x2);
printf("\nEnter y1:");
    scanf("%d",&y1);
printf("\nEnter y2:");
    scanf("%d",&y2);
answer = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
printf("\nThe final answer is %.2f", answer);
}
