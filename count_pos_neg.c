//Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
#include<stdio.h>
int main(){
    float number[5];
    int j ,  tot_pos = 0, tot_neg = 0;
    printf("Enter first number : ");
    scanf("%f" , &number[0]);
    
    printf("Enter second number : ");
    scanf("%f" , &number[1]);
    
    printf("Enter third number : ");
    scanf("%f" , &number[2]);
    
    printf("Enter forth number : ");
    scanf("%f" , &number[3]);
    
    printf("Enter fifth number : ");
    scanf("%f" , &number[4]);
    

    for(j =0; j<=4;j++){
        if(number[j]>0){
            tot_pos++;
           
 
        }
        else if(number[j]<0){
            tot_neg++;
           
        }
        
        
    }
    printf("Number of positive numbers are : %d\n",tot_pos);
    printf("Number of negative numbers are : %d",tot_neg);

}