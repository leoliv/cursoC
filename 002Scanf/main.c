#include <stdio.h>

int main() {
  int a, b, c;
  char nome[30];

  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  c = a + b;
  printf("A soma entre o Primeiro número e o segundo é: %d\n", c);
  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("Seu nome é: %s", nome);
  return 0;
}
