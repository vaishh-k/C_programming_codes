/* Write a C program that accepts two item's weight and 
number of purchases (floating point values) and calculates their average value.*/

#include<stdio.h>
int main(){
    float weight_item1;
    float weight_item2;
    float no_item1;
    float no_item2;
    float total_weight;
    float total_no;
    float total_avg;

    printf("Weight of item1:" );
    scanf("%f" , &weight_item1);
    printf("No of item1: ");
    scanf("%f" , &no_item1);

    printf("Weight of item2: ");
    scanf("%f" , &weight_item2);
    printf("No of item2: ");
    scanf("%f" , &no_item2);

    total_weight = (weight_item1*no_item1) + (weight_item2*no_item2);
    total_no = no_item1 + no_item2;

    total_avg = total_weight/total_no;
    printf("Average value: %f\n", total_avg );
    

}