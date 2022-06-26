#include<stdio.h>
#include<conio.h>
void main(){
int distance, speed, timeHr, timeMin;
printf("\nEnter the Distance in KM:");
    scanf("%d",&distance);
printf("\nEnter the Speed in KM/PH:");
    scanf("%d",&speed);
timeHr = distance/speed;
float speedInMinutes = (speed/60.0);
timeMin = (distance%speed)/speedInMinutes;
if(timeHr>0){
printf("At this speed you might take %d hrs and %d minutes to reach your destination.",timeHr,timeMin);
}
else{
    printf("At this speed you might take %d minutes to reach your destination.",timeMin);
}
}
