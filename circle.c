#include<stdio.h>
int main(){
    float pi = 3.14;
    int r = 6;

    //area of circle
    float a = pi*r*r;
    float p = 2*pi*r;

    printf("Area of circle is %f inches \n" ,a);
    printf("perimeter of circle is%f inches\n ", p);
    return 0;
}