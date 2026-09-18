/*Write a C program to calculate a bike’s average consumption from the given total distance (integer value) 
travelled (in km) and spent fuel (in litters, float number – 2 decimal points).*/
#include<stdio.h>
int main(){
    int dist;
    float fule, avg;

    printf("Enter distance covered: ");
    scanf("%d", &dist);

    printf("enter the value fule consumed : ");
    scanf("%f" , &fule);

    avg = dist/ fule;

    printf("Bike's average is :%f" , avg);
    return 0;

}