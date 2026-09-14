/* Write a C program that accepts two integers from 
the user and calculates the product of the two integers.*/

#include<stdio.h>
int main(){
    int x;
    int y;
    int prod;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    prod = x * y;
    printf("Product:%d\n", prod);

    return 0;
}