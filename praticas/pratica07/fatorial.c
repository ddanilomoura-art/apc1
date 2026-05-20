#include <stdio.h>

int main() {

    int numero, i;
    long long fatorial;

    printf("Entre com um numero para calcular fatorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("nao existe fatorial de numero negativo.\n");
    } else {

        fatorial = 1;

        for (i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }

        printf("\nfatorial deste numero e = %lld\n", fatorial);
    }

    return 0;
}