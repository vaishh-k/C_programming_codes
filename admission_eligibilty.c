/* Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 
and Total in all three subject >=190 or 
Total in Maths and Physics >=140 ------------------------------------- 
Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input 
the marks obtained in Mathematics :72 Total marks of Maths, 
Physics and Chemistry : 188 Total marks of Maths and Physics : 137 
The candidate is not eligible.*/

#include<stdio.h>
int main(){
    int math,physics,chem,total_marks;

    printf("Eligibility Criteria :\n");   // Display eligibility criteria.
    printf("Marks in Maths >=65\n");
    printf("and Marks in Phy >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subject >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");

    printf("Enter marks in maths:");
    scanf("%d", &math);
    printf("Enter marks in physics:");
    scanf("%d", &physics);
    printf("Enter marks in chem:");
    scanf("%d", &chem);

    if((math>=65) && (physics >=55) && (chem >= 50) && (math + physics + chem >=190) || (math +physics >= 140)){
        printf("The candidate is eligible for admission.");
    }
    else{
        printf("\nThe candidate is not eligible for admission.");
    }
    printf("\nTotal marks of Maths, Physics and Chemistry : %d", math + physics + chem);  
    printf("\nTotal marks of Maths and Physics : %d", math + physics);   

}