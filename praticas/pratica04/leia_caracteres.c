#include <stdio.h>

int main() {
    char caractere;

    printf("Insira um caractere: ");
    scanf("%c", &caractere);

    printf("Caractere: %c\n", caractere);
    printf("ASCII: %d\n", caractere);

    return 0;
}