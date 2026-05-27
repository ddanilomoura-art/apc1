#include <stdio.h>

int main() {

    int numero, i;

    printf("Entre com um numero para imprimir seus multiplos num intervalo de 1 a 100: ");
    scanf("%d", &numero);

    for ( i = 1; i <= 100; i++)
    {
        if (i % numero == 0)
        {
            printf("%d, ", i);
        }
        
    }
    

    return 0;
}