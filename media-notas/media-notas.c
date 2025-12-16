#include <stdio.h>

int main()
{
  int idade, matricula;
  float nota1, nota2, nota3, soma_nota, media;
  char nome[50];

  printf("----------------------\n");
  printf("--- MÉDIA DE NOTAS ---\n");
  printf("----------------------\n");

  printf("Nome: ");
  scanf("%s", nome);
  
  printf("Idade: ");
  scanf("%d", &idade);
  
  printf("Matrícula: ");
  scanf("%d", &matricula);

  printf("Nota 1: ");
  scanf("%f", &nota1);

  printf("Nota 2: ");
  scanf("%f", &nota2);

  printf("Nota 3: ");
  scanf("%f", &nota3);

  soma_nota = nota1 + nota2 + nota3;
  media = soma_nota / 3;

  printf("Média do aluno %s é: %.1fpts.\n", nome, media);

  return 0;
}