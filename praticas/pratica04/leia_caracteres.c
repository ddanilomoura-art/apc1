#include <stdio.h>

int main() {
    char caractere;

    printf("insira um caractere: ");
    scanf("%c", &caractere);
    while (getchar() != '\n');

    printf("%i", caractere);
    return 0;
}