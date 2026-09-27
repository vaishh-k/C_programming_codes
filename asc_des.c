//Write a C program to check if two numbers in a pair are in ascending order or descending order.
#include<stdio.h>
int main(){
    int x , y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    if(x>y){
        printf("Pair is in descending order");
    }
    else{
        printf("Pair is in ascending order");
    }
}