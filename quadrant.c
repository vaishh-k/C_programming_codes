//Write a C program to read the coordinates 
#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the value of first number: ");
    scanf("%d", &x);

    printf("Enter the value of second number: ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("numbers are in first quadrant");
    }

    else if(x<0 && y>0){
        printf("numbers are in second Quadrant");
    }

    else if(x<0 && y<0){
        printf("numbers are in third quadrant");
    }
    else if(x>0 && y<0){
        printf("numbers are in fourth quadrant");
    }

}