//input 5 integers and find the maximum of them and its position
#include<stdio.h>
#define MAX 5
int main(){
    int number[MAX], i,j,max=0,pos=0;
    printf("Enter 5 integers: \n");
    for(i=0;i<MAX;i++){
        scanf("%d", &number[i]);
    }
    for(j=0;j<MAX;j++){
       if( number[j]>max){
        max = number[j];
        pos= j;
       }
    }
    printf("Maximum number is %d\n",max);
    printf("Its position is %d\n",pos +1);
}