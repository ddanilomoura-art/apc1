#include <stdio.h>

int main(){
    printf("==============================\n");
    printf("      N O T A    L E G A L\n");
    printf("==============================\n");
    printf("%-15s %3s %10s\n", "Produto", "Qtd", "Valor", "Unit");
    printf("%-15s %03d %10.2f\n", "camiseta", 2, 39.99);
    printf("%-15s %03d %10.2f\n", "calca", 1, 89.90);
    printf("%-15s %03d %10.2f\n", "meia social", 3, 19.99);
    printf("==============================\n");
    printf("%-15s %13.2f\n", "total", 229.85);

    return 0;
} 