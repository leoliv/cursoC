#include <stdio.h>

int main() {
  int n;
  printf("Digite um número de 1 a 4: ");
  scanf("%d", &n);
  switch (n) {
    case 1:
      printf("Um\n");
      break;
    case 2:
      printf("Dois\n");
      break;
    case 3:
      printf("Três\n");
      break;
    case 4:
      printf("Quatro\n");
      break;
    default:
      printf("Número inválido\n");
      break;
  }
  return 0;
}
