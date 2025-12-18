#include <stdio.h>

int main()
{
  int idade, matricula;
  float nota1, nota2, nota3, somador_notas, media;
  char nome[50];

  printf("-----------------------\n");
  printf("--- MÉDIA DAS NOTAS ---\n");
  printf("-----------------------\n");

  printf("Nome: ");
  scanf("%s", nome);

  printf("Idade: ");
  scanf("%d", &idade);

  printf("Matrícula: ");
  scanf("%d", &matricula);

  printf("Digite a sua primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a sua segunda nota: ");
  scanf("%f", &nota2);

  printf("Digite a sua terceira nota: ");
  scanf("%f", &nota3);

  somador_notas = nota1 + nota2 + nota3;
  media = somador_notas / 3;

  printf("Média do aluno %s é: %.1fpts.\n", nome, media);

  return 0;
}