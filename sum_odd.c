//Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
#include<stdio.h>
int main(){
    int x, y , sum=0 ,i;
    printf("Enter starting number: ");
    scanf("%d", &x);
    printf("Enter end number: ");
    scanf("%d", &y);
    for(i=x;i<=y;i++){
        if(!(i%2)==0){
            sum = sum+i;
        }
    }
    printf("Sum of odd numbes between given range is: %d",sum);
}