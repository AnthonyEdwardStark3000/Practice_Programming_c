#include<stdio.h>
#include<conio.h>
void main(){
int seconds,hourSec=3600;
printf("\nEnter the total seconds in numbers:");
    scanf("%d",&seconds);
int hour =seconds/hourSec;
int minutes = seconds-hourSec;
minutes = (minutes%hourSec)/60;
int remSec = ((seconds-hourSec))%60;
printf("\nThe time is: %d hr %d min %d sec",hour,minutes,remSec);
}
