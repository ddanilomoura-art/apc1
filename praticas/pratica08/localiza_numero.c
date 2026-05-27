#include <stdio.h>

int main(){

    int vetor[10];
    int i, numero, encontrado = 0;

    printf("digite 10 numeros inteiros: ");

    for (i = 0; i < 10; i++)
    {
        printf("\nnumero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("digite um numero para localizar: ");
    scanf("%d", &numero);

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] == numero)
        {
            printf("numero encontrado na posicao %d do vetor.\n");
            encontrado = 1;
        }
        
    }

    if (encontrado == 0)
    {
        printf("o numero nao esta no vetor.\n");
    }
    
    

    return 0;
}