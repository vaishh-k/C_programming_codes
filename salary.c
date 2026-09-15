//*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.

#include<stdio.h>
int main(){
    int Employee_id ;
    float hr;
    int salary_per_hr = 500;
    float todays_salary;

    printf("Enter Employee ID: ");
    scanf("%ld" , &Employee_id);

    printf("Enter no. of hr worked: ");
    scanf("%f", &hr);
    todays_salary = salary_per_hr * hr;

    printf("Todays Salary: %f" , todays_salary);



}