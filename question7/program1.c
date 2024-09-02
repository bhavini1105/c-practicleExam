#include <stdio.h>

int main() {
    FILE *ptr, *ptr1;
    char file1[100], file2[100];
    char ch;

    
    printf("Enter the name of the  file1: ");
    scanf("%s",file1);

    printf("Enter the name of the  file2: ");
    scanf("%s", file2);

    ptr = fopen(file1, "r");
    if (file1 == NULL) {
        printf("File is not Avilable\n");
    }
    ptr1 = fopen(file2, "w");
    if (file2 == NULL) {
        printf("File is not Avilable\n");
        fclose(file1);
    }
    while ((ch = fgetc(file1))) {
        fputc(ch, file2);
    }

    printf("File copied successfully.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}