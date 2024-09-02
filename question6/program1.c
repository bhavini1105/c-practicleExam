#include<stdio.h>

struct movie
{
    char m_titile[100];
    int generation;
    char m_languge[100];
};


void main(){

    int n;
    printf("Enter Number of Movies :");
    scanf("%d",&n);

    struct movie moviesn[n];

    for (int i = 0; i < n; i++)
    {
        printf("\n Movie Number [%d]",i);
        printf("\n Enter Movie Name :");
        scanf("%s",&moviesn[i].m_titile);

        printf("Movie Generation :");
        scanf("%d",&moviesn[i].generation);

        printf("Movie Language is :");
        scanf("%s",&moviesn[i].m_languge);
    }
    
     for (int i = 0; i < n; i++)
    {
        printf("\n Movie Number [%d]\n",i);
        printf("\n Enter Movie Name : %s",moviesn[i].m_titile);

        printf("\n Movie Generation : %d",moviesn[i].generation);

        printf("\n Movie Language is : %s",moviesn[i].m_languge);
    }

}