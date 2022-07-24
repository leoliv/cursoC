#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>

void Cadastrar();
void Listar();
void Procurar();

int op = 0;
int linha = 0;

struct Cadastro {
  int codigo;
  char nome[100];
  char cpf[14];
  char vacina[100];
  char data[11];
  char lote[9];
};

struct Cadastro pessoa[sizeof(linha)];

int main() {

  while (op == 0) {
    printf("\n======================================\n");
    printf("1 - Cadastrar vacina\n");
    printf("2 - Listar aplicações\n");
    printf("3 - Consultar por CPF\n");
    printf("4 - Sair\n");
    printf("======================================\n");
    int opcao;
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
      printf("-------------- Cadastro --------------\n");
      Cadastrar();
      system("clear");
      break;
    case 2:
      system("clear");
      printf("\n-------- Lista de aplicações ---------\n");
      Listar();
      system("clear");
      break;
    case 3:
      system("clear");
      printf("\n-------- Consulta por CPF ---------\n");
      Procurar();
      break;
    case 4:
      printf("Sair\n");
      op = 1;
      break;
    default:
      printf("Opção inválida\n");
      break;
    }
  }

  return 0;
}

void Cadastrar() {
  for (int i = linha; i <= linha; i++) {
    printf("Digite o nome: ");
    scanf("%s", pessoa[i].nome);
    printf("Digite o CPF: ");
    scanf("%s", pessoa[i].cpf);
    printf("Digite a vacina: ");
    scanf("%s", pessoa[i].vacina);
    printf("Digite a data: ");
    scanf("%s", pessoa[i].data);
    printf("Digite o lote: ");
    scanf("%s", pessoa[i].lote);
  }
  pessoa[linha].codigo = linha;
  linha++;
}

void Listar() {
  int opcao = 0;
  do {
    for (int i = 0; i < linha; i++) {
      printf("=======================================\n");
      printf("Codigo: %d\n", pessoa[i].codigo);
      printf("Nome: %s\n", pessoa[i].nome);
      printf("CPF: %s\n", pessoa[i].cpf);
      printf("Vacina: %s\n", pessoa[i].vacina);
      printf("Data: %s\n", pessoa[i].data);
      printf("Número do Lote: %s\n", pessoa[i].lote);
    }
    printf("\n1 - Voltar: ");
    scanf("%d", &opcao);
  } while (opcao != 1);
}

void Procurar() {
  int opcao = 0;
  char verificarCPF[14];
  do {
    printf("Procurar por CPF: ");
    scanf("%s", verificarCPF);
    printf("%s\n", verificarCPF);
    for (int i = 0; i < linha; i++) {
      if (strcmp(verificarCPF, pessoa[i].cpf) == 0) {
        printf("=======================================\n");
        printf("Codigo: %d\n", pessoa[i].codigo);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("CPF: %s\n", pessoa[i].cpf);
        printf("Vacina: %s\n", pessoa[i].vacina);
        printf("Data: %s\n", pessoa[i].data);
        printf("Número do Lote: %s\n", pessoa[i].lote);
      }
    }
    printf("\n1 - Voltar: ");
    scanf("%d", &opcao);
  } while (opcao != 1);
}
