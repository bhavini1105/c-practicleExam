#include<stdio.h>

void main(){
    int numnber ;

    printf("Enter Any Year : ");
    scanf("%d",&numnber);

    printf("\nEntered Year is %d",numnber);

    if (numnber % 4 == 0)
    {
        printf("\nLeap Year");
    }
    else{
        printf("\nNot Leap Year");
    }
    
}