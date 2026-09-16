// Write a C program to calculate the distance between two points.
#include<stdio.h>
#include<math.h>
int main(){
    float x1, x2, y1,y2;
    float dist;

    printf("Enter the value of x1 : ");
    scanf("%f", &x1);

    printf("Enter the value of x2 : ");
    scanf("%f", &x2);

    printf("Enter the value of y1 : ");
    scanf("%f", &y1);

    printf("enter the value of y2 : ");
    scanf("%f", &y2);

    dist = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("distance between two point is %f" ,sqrt( dist));
    return 0;
}