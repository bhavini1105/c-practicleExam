#include <stdio.h>


int fact(int n) {
    if (n == 0 || n == 1) {
        return 1; 
    } else {
        return n * fact(n - 1); 
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Entered Numbers is Not VAlid.....");
        return 1;
    } 
    else {
        int factorial = fact(num);
        printf("Factorial of Given Number %d is %d.\n", num,factorial);
    }

    return 0;
}