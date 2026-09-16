/* Write a C program that accepts three integers 
and finds the maximum of three.
*/

#include<stdio.h>
int main(){
    int x1,x2,x3;
    printf("Input the first integer:");
    scanf("%d" ,&x1);
    printf("Input the second integer:");
    scanf("%d" ,&x2);
    printf("Input the third integer:");
    scanf("%d" ,&x3);

    if(x1 > x2 && x1 > x3){
        printf("Maximun value of three integer: %d", x1);
    }
    else if(x2 > x1 && x2 > x3){
        printf("Maximum value of three integer: %d", x2);
    }
    else{
        printf("Maximum value of three integer: %d", x3);
    }
}