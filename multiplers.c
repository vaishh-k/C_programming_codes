/* Write a C program that reads two integers and 
checks whether they are multiplied or not.*/

#include<stdio.h>


int main(){
    int a,b;
    printf("Enter value for a:");
    scanf("%d", &a);
    printf("Enter value for b:");
    scanf("%d", &b);

    if(a==0 || b==0){
        printf("Cannot check multiplication with zero");
    }  
    else{
        if(a>b){
        int temp;
        temp = a;
        a = b;
        b = temp;
        }
        if(b%a==0){
            printf("Multipliers!");
        }
        else{
            printf("Not multipliers!");
        }
    }
}