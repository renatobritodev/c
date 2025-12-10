#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("%s", "Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("%s", "Digite o segundo número:\n");
    scanf("%d", &num2);

    sum = num1 + num2;
    
    printf("A soma é: %d\n", sum);

    return 0;
}