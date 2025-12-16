#include <stdio.h>

int main()
{
    int numero1, numero2, soma;

    printf("-----------------------\n");
    printf("--- SOMANDO VALORES ---\n");
    printf("-----------------------\n");

    printf("%s", "Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("%s", "Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("A soma de %d e %d é: %d\n", numero1, numero2, soma);

    return 0;
}