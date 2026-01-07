#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int opcao, numeroSecreto, palpite;

  printf("----------------------\n");
  printf("--- Menu Principal ---\n");
  printf("----------------------\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Número secreto %d\n", numeroSecreto);
    break;
  case 2:
    printf("Regras bla bla bla\n");
    break;
  case 3:
    printf("Saída do jogo\n");
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
}