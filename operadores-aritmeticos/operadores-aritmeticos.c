#include <stdio.h>

int main() {
  int numero1, numero2;
  int soma, subtracao, multiplicacao, divisao;

  printf("------------------------------\n");
  printf("--- OPERADORES ARITMÉTICOS ---\n");
  printf("------------------------------\n");
  
  printf("\nEntre com o primeiro número: ");
  scanf("%d", &numero1);
  printf("Entre com o segundo número: ");
  scanf("%d", &numero2);
  
  soma = numero1 + numero2;
  subtracao = numero1 - numero2;
  multiplicacao = numero1 * numero2;
  divisao = numero1 / numero2;

  printf("A soma é: %d\n", soma);
  printf("A subtracao é: %d\n", subtracao);
  printf("A multiplicacao é: %d\n", multiplicacao);
  printf("A divisao é: %d\n", divisao);

  return 0;
}