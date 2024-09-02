#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];  
    int count = 0;

    printf("Enter Any String: ");
    scanf("%s", string1);  
    
    int n= strlen(string1);

    for (int i = 0; i < n; i++) {  


        if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' ||  string1[i] == 'o' || string1[i] == 'u' ) {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);  

    return 0;
}