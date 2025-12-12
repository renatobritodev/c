#include <stdio.h>

int main() {
    char state;
    char letter_code[3], city[50];
    int population, number_tourism_attraction;
    float area, gross_domestic_product;

    printf("Digite a letra do estado entre A e H: \n");
    scanf("%c", &state);

    printf("Digite o código da carta: letra do estado e número entre 01 e 04 (Ex.: B02) \n");
    scanf("%s", letter_code);

    printf("Digite o nome da cidade: \n");
    scanf("%s", city);

    printf("Número de habitantes da cidade: \n");
    scanf("%d", &population);

    printf("Quantos km?: (apenas números) \n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &gross_domestic_product);

    printf("Pontos Turísticos: (apenas números) \n");
    scanf("%d", &number_tourism_attraction);

    printf("\n");
    printf("Carta: 1 \n");
    printf("Estado: %c \n", state);
    printf("Código: %s \n", letter_code);
    printf("Nome da cidade: %s \n", city);
    printf("População: %d \n", population);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", gross_domestic_product);
    printf("Número de Pontos Turísticos: %d \n", number_tourism_attraction);
    printf("\n");

    return 0;
}