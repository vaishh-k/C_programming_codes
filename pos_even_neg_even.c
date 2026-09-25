/*Write a C program to check whether a given integer is positive even, negative even, 
positive odd or negative odd. Print even if the number is 0.*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter any integer value : ");
    scanf("%d" , &num);

    if(num>0 && (num%2)==0){
        printf("number is positive and even");
    }
    else if(num<0 && (num%2)==0){
        printf("number is negative and even");
    }
    else if(num>0 && (num%2)!=0){
        printf("number is positive and odd");
    }
    else if(num<0 && (num%2)!=0){
        printf("number is negative and odd");
    }
    else{
        printf("number is even");
    }
    return 0;
}
