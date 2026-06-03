#include <stdio.h>
#include <string.h>

int main(){

    char str1[50], str2[50], str3[50];
    char temp[50];

    printf("Escreva sua primeira string: ");
    scanf("%s", str1);
    printf("Escreva sua segunda string: ");
    scanf("%s", str2);
    printf("Escreva sua terceira string: ");
    scanf("%s", str3);

    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    
    return 0;
}