//Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

#include<stdio.h>
int main(){
    int amount, total;
    printf("Enter the total amount : ");
    scanf("%d", &amount);
    printf("\n");

    total = amount/100;
    printf("There are %d notes of 100", total);
    amount = amount - (total*100);
    printf("\n");

    total = amount/50;
    printf("There are %d notes of 50", total);
    amount = amount - (total*50);
    printf("\n");

    total = amount/20;
    printf("There are %d notes of 20", total);
    amount = amount - (total*20);
    printf("\n");

    total = amount/10;
    printf("There are %d note of 10" , total);
    amount = amount - (total*10);
    printf("\n");

    total = amount/5;
    printf("There are %d coins of 5", total);
    amount = amount -(total*5);
    printf("\n");

    total = amount/2;
    printf("There are %d coins of 2", total);
    amount = amount- (total*2);
    printf("\n");

    total = amount/1;
    printf("There are %d coins of 1", total);
    printf("\n");

    return 0;


}