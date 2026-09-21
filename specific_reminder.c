/* Print numbers between 1 and 100 with a specific remainder*/

#include<stdio.h>
int main(){
    int x,i;
    printf("Enter a number:");
    scanf("%d", &x);

    for (i=1;i<=100;i++){
        if((i%x) == 3) { 
            printf("%d\n", i);
    }
}
}