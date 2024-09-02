/*
 _ _ _ _* 
 _ _ _* *
 _ _* * *
 _* * * *
* * * * *
*/

#include<stdio.h>

void main(){
    int i , j , k ;

    for( i = 5  ; i >= 1 ; i--)
    {
        for( k = 1 ; k < i ; k++)
        {
            printf(" _");
        }
        for( j = i ; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}