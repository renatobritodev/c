#include <stdio.h>

int main() {
  /*
    Incremento: (++)
    Pré-Incremento: ++a
    Pós-Incremento: a++
    
    Decremento: --
    Pre-Decremento: --a
    Pós-Decremento: a--

  */

  printf("---------------------------------------------\n");
  printf("--- OPERADORES DE INCREMENTO E DECREMENTO ---\n");
  printf("---------------------------------------------\n");

  int numero = 3;
  printf("Começando com  o número: %d\n", numero);

  numero+= 5;
  printf("Número após incremento: %d\n", numero);
  
  numero--;
  printf("Número após incremento: %d\n", numero);

  return 0;
}