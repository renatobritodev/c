#include <stdio.h>

int main()
{
  char nome[50] = "João";
  char primeira_letra = 'J';
  int idade = 23;
  float altura = 1.75;
  double saldo_bancario = 3105.47;

  printf("---------------------\n");
  printf("--- EXIBIR DADOS  ---\n");
  printf("---------------------\n");

  printf("Nome: %s\n", nome);
  printf("Primeira letra: %c\n", primeira_letra);
  printf("Idade: %d anos\n", idade);
  printf("Altura: %.2fm\n", altura);
  printf("Saldo bancário: R$%.2lf\n", saldo_bancario);

  return 0;
}

/**
 * %c	um único caractere
 * %s	uma string
 * %hi	short (com sinal)
 * %hu	short (sem sinal)
 * %Lf	long double
 * %n	sem impressão
 * %d	um inteiro decimal (assume a base 10)
 * %i	um decimal inteiro (detecta a base automaticamente)
 * %o	um inteiro octal (base 8)
 * %x	um inteiro hexadecimal (base 16)
 * %p	um endereço (ou pointer)
 * %f	um número de ponto flutuante para floats
 * %u	int decimal sem sinal
 * %e	um número de ponto flutuante em notação científica
 * %E	um número de ponto flutuante em notação científica
 * %%	o símbolo %
 */