#include <stdio.h>

int main()
{
  char name[50] = "John";
  char letter = 'J';
  int age = 23;
  float height = 1.75;
  double bankBalance = 3105.47;

  printf("Name: %s\n", name);
  printf("Initial Letter: %c\n", letter);
  printf("Age: %d years old\n", age);
  printf("Height: %.2fm\n", height);
  printf("Bank Balance: US$%.2lf\n", bankBalance);

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