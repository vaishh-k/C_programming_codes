//Write a C program to find and print the square of all the even values from 1 to a specified value.
#include<stdio.h>
int main(){
    int num ,i;
    printf("Enter the value of end num : ");
    scanf("%d",&num);
     for(i=1;i<=num;i++){
        if(i%2==0){
            i*i;
            printf("Square of %d is %d",i,i*i);
        }
        printf("\n");
    }
}