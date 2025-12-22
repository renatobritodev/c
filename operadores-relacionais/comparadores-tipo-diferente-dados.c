#include <stdio.h>

int main()
{
  int x = 5;
  int y = 5.0;

  printf("--------------------------------------------------------\n");
  printf("--- COMPARAÇÃO COM TIPOS DE DADOS DIFERENTES SIMPLES ---\n");
  printf("--------------------------------------------------------\n");

  printf("x == y: %d\n", x == y);
  printf("x != y: %d\n", x != y);

  return 0;
}