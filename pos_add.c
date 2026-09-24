/*Write a C program that reads 5 numbers, counts the number of positive numbers,
 and prints out the average of all positive values.*/

#include<stdio.h>
int main(){
    int num[5] , j , sum=0 , count=0;
    float avg;

    printf("Enter first number: ");
    scanf("%d", &num[0]);
    printf("Enter second number: ");
    scanf("%d", &num[1]);
    printf("Enter third number: ");
    scanf("%d", &num[2]);
    printf("Enter forth number: ");
    scanf("%d", &num[3]);
    printf("Enter fifth number: ");
    scanf("%d", &num[4]);

    for(j=0;j<5;j++){
        if(num[j]>0){
            count++;
            sum = sum+num[j]; 
        }
    }
    avg = sum/count;
    printf("Number of positive numbers are : %d\n",count);
    printf("Average of positive numbers is : %f",avg);
}