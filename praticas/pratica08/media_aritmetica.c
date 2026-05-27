#include <stdio.h>

int main(){

    int numeros[10];
    int i, soma = 0;
    float media;

    printf("digite 10 numeros inteiros: ");

    for (i = 0; i < 10; i++)
    {
        printf("\nnumero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    media = soma / 10.0;

    printf("\nmedia aritmetica = %.2f\n", media);
    


    return 0;
}