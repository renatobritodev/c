#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int escolherJogador, escolherComputador;
  // Gera um número aleatório baseado na hora do computador
  srand(time(0));

  printf("***************\n");
  printf("*** JOKENPÔ ***\n");
  printf("***************\n");
  printf("Escolha uma opção:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha: ");
  scanf("%d", &escolherJogador);

  escolherComputador = rand() % 3 + 1;

  printf("*** RESULTADO ***\n");

  switch (escolherJogador)
  {
  case 1:
    printf("Jogador: Pedra - ");
    break;
  case 2:
    printf("Jogador: Papel - ");
    break;
  case 3:
    printf("Jogador: Tesoura - ");
    break;
  default:
    printf("Opção inválida");
    break;
  }

  switch (escolherComputador)
  {
  case 1:
    printf("Computador: Pedra - ");
    break;
  case 2:
    printf("Computador: Papel - ");
    break;
  case 3:
    printf("Computador: Tesoura - ");
    break;
  }

  if (escolherComputador == escolherJogador)
  {
    printf("### JOGO EMPATOU ###");
  }
  else if (
      (escolherJogador == 1) && (escolherComputador == 3) ||
      (escolherJogador == 2) && (escolherComputador == 1) ||
      (escolherJogador == 3) && (escolherComputador == 2))
  {
    printf("### PARABÉNS, VOCÊ GANHOU ! ! ! ###");
  }
  else
  {
    printf("VOCÊ PERDEU!");
  }

  return 0;
}