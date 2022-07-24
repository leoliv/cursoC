#include <stdio.h>
#include <stdlib.h>

int main() {

  /* Tipos
   *
   * 1) char
   * 2) Int
   * 3) float
   * 4) double
   * 5) void
   */

  /* MODIFICADORES DE TIPOS
   *
   * 1) signed      -> + e -
   * 2) unsigned    -> + (capacidade dobra)
   * 3) long        -> aumetar a capacidade do tamanho de armazenamento
   * 4) short       -> diminuir a capacidade do tamanho de armazenamento
   * */

  int i;
  short int si;
  unsigned short int usi;
  long int li;
  unsigned long int uli;

  printf("%lu -> variavel\n", sizeof(i));
  printf("%lu -> variavel\n", sizeof(si));
  printf("%lu -> variavel\n", sizeof(usi));
  printf("%lu -> variavel\n", sizeof(li));
  printf("%lu -> variavel\n", sizeof(uli));

  return 0;
}
