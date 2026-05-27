#include <stdio.h>

int main() {

    float nota = 0;

    do{
    printf("Entre com sua nota: ");
    scanf("%f", &nota);

        if (nota < 0 || nota > 10)
        {
            printf("Nota invalida! Tente novamente.\n");
        }
    } while (nota < 0 || nota > 10);
    
        printf("A nota digitada foi: %.2f\n", nota);
    

    return 0;
}