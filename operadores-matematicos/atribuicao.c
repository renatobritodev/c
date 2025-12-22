#include <stdio.h>

int main()
{
  /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
  */

  int numero = 10, resultado;

  printf("----------------------------------\n");
  printf("---- OPERADORES DE ATRIBUIÇÃO ----\n");
  printf("----------------------------------\n");

  resultado = 10;
  printf("Resultado: %d\n", resultado);

  resultado += 15;
  printf("Novo resultado com soma:  %d\n", resultado);

  resultado -= numero;
  printf("Novo resultado com subtração: %d\n", resultado);

  resultado *= 3;
  printf("Novo resultado com multiplicação: %d\n", resultado);

  resultado /= 2;
  printf("Novo resultado com divisão: %d\n", resultado);

  return 0;
}