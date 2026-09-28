/*Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for 
correct password print, "Correct password" and quit the program. The correct password is 1234.*/
#include<stdio.h>
int main(){
    int pass;
    printf("Enter password: ");
    scanf("%ld", &pass);

    if(pass == 2007){
        printf("Password is correct");
    }
    else{
        printf("Wrong Password");
    }
}