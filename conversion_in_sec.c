#include<stdio.h>

int main(){
    int sec;
    int hours,min,seconds;
    printf("Input seconds:");
    scanf("%d", &sec);

    hours = sec/3600;
    min = (sec-(3600*hours))/60;
    seconds = (sec-(3600*hours)- (min*60));

    printf("Hours:Minutes:Seconds:%d:%d:%d\n" ,hours, min,seconds);


}