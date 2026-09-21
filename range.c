/*Write a C program that reads an integer and checks the specified range to which it belongs. 
Print an error message if the number is negative and greater than 80.*/

#include<stdio.h>
int main(){
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);

    if(x>0 && x<20){
        printf("Entered no. is between range 0 to 20");
    }

    else if(x>21 && x<40){
        printf("Entered no. is between range 21 to 40");
    }

    else if(x>41 && x<60){
        printf("Entered no. is between range 41 to 60");

    }

    else if(x>61 && x<80){
        printf("Entered no. is between range 61 to 80");
    }

    else{
        printf("Entered no. is out of range");
    }

    return 0;
}
