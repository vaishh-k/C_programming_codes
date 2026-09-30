//Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
#include<stdio.h>
int main(){
    int x,y,i,sum=0, temp;
    printf("Enter the value of first integer: ");
    scanf("%d", &x);
    printf("Enter the value of second integer: ");
    scanf("%d", &y);
    if(y<x){
        temp = x;
        x = y;
        y = temp;
    }
    for(i=x;i<=y;i++){
        if((i%17)!=0){
            sum = sum +i;
        }
    }
    printf("The total sum of integer which are not divisible by 17 is %d",sum);
}