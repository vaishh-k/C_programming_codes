/* Write a program to find and print all factors of a number entered by the user.*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    
    
     for (int i = 1; i <= num; i++) {
            if(num%i == 0){
                printf("%d ", i);
            }
        }
       


    }