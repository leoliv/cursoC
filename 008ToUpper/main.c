#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  char valor;
  printf("Digite uma letra: ");
  scanf("%c", &valor);
  printf("Sua letra se transformou em maiúscula >%c<", toupper(valor));
}
