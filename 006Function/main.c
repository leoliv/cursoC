#include <stdio.h>

int Multiplicar(); // Prototipo da função Multiplicar

int main() {
  /* int resultado; */
  /* resultado = Multiplicar(); // chamada da função Multiplicar e atribuição */
  printf("O resultado foi %d\n", Multiplicar()); // chamada da função Multiplicar
}

// Definição da função Multiplicar
int Multiplicar() {
  int num1, num2, valor;
  num1 = 2;
  num2 = 5;
  valor = num1 * num2;
  return valor;
}
