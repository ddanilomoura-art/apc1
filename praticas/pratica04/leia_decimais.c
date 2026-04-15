#include <stdio.h>

int main() {
    float n1;
    float n2;

    printf("informe sua primeira nota: ");
    scanf("%f", &n1);

    printf("informe sua segunda nota: ");
    scanf("%f", &n2);
    while (getchar() != '\n');

    printf("as notas fornecidas foram: %.2f, %.2f\n", n1, n2);

    
    return 0;
}