//*Write a C program that accepts two integers from the user and calculates the sum of the two integers.*
#include<stdio.h>
int main (){
    int a,b, sum;
    printf("Enter first integer: ");
    scanf("%d",& a);

    printf("Enter second integer: ");
    scanf("%d", & b);

    sum = a+b;
    printf("Sum is: %d", sum);

    return 0;
}