/* Write a C program to compute the perimeter and area of a rectangle
 with a height of 7 inches and width of 5 inches.*/

#include<stdio.h>

int main(){
    double length,width;
    double perimeter,area;

    printf("Enter the length of the rectangle:");
    scanf("%lf",&length);

    printf("Enter the width of the rectangle:");
    scanf("%lf",&width);

    perimeter = 2*(length+width);
    printf("The perimeter of rectangle is:%.2f inches\n",perimeter);

    area = length*width;
    printf("The area of the rectangle is:%.2f square inches\n",area);

}
