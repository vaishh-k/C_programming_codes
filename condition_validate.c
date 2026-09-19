/* Write a C program that accepts 4 integers p, q, r, s 
from the user where q, r and s are positive and p is even. 
If q is greater than r and s is greater than p and if the sum of 
r and s is greater than the sum of p and q 
print "Correct values", otherwise print "Wrong values" */

#include<stdio.h>
#include<conio.h>

int main(){
    int p,q,r,s;

    printf("Enter value of p:\n");
    scanf("%d", &p);
    printf("Enter value of q:\n");
    scanf("%d", &q);
    printf("Enter value of r:\n");
    scanf("%d", &r);
    printf("Enter value of s:\n");
    scanf("%d", &s);

    if((q>0) && (r>0) && (s>0) && (p%2==0) && (q>r) && (s>p) && (r+s > p+q )){
        printf("\nCorrect values");
    }
    else{
        printf("\nWrong values");
    }
}
