#include <stdio.h>
void swap(int *p, int *q)
{
    int r;
    r = *p;
    *p = *q;
    *q = r;
}
void main()
{
    int x, y;
    printf("Enter First Number :");
    scanf("%d", &x);
    printf("Enter Second Number :");
    scanf("%d", &y);

    swap(&x, &y);

    printf("X : %d\n Y : %d\n", x, y);
}