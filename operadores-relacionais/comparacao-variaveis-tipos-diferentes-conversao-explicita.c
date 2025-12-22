#include <stdio.h>

int main()
{
  int numero = 10;
  int resultado = 10.0;

  int comparacao = (float)numero == resultado;

  printf("------------------------------------------------\n");
  printf("--- TIPOS DIFERENTES COM CONVERSÃO EXPLÍCITA ---\n");
  printf("------------------------------------------------\n");

  printf("numero == result: %d\n", comparacao);

  return 0;
}