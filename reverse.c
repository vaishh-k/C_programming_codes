/* Write a program where the user enters a number, 
and the program prints it in reverse order.*/

#include<stdio.h>
int main(){
    int number;
    int digit;
    int rev = 0;
    printf("Enter a number:");
    scanf("%d", &number);

    do{
        digit = number % 10;
        rev = (rev * 10 + digit);
        number = number/10;
    }while(number>0);
    printf("Reverse: %d\n", rev);
}