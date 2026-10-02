//Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
#include<stdio.h>
int main(){
    int x, y, i, temp;
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);
    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }
    for(i=x+1;i<y;i++){
        if(i%7==2 || i%7==3){
            printf("%d\n",i);
        }
    }
}