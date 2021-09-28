#include <stdio.h>

// Objetivo: Um programa que lê a idade de um nadador e imprime a categoria retornada pela função;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

char classificar(int idade) {

  char classificação;

  // classificação dos nadadores de acordo com a idade

  if (idade <= 7) {
      classificação = 'F';
  }
  else if (idade <= 10) {
      classificação = 'E';
  }
  else if (idade <= 13) {
      classificação = 'D';
  }
  else if (idade <= 15) {
      classificação = 'C';
  }
  else if (idade <= 17) {
      classificação = 'B';
  }
  else {
      classificação = 'A';
  }

  return(classificação);
}

int main(void) {

  int idade;
  char classificação;

  // Impressão de instruções e coleta de dados

  printf("Qual é a idade do nadador? ");
  scanf("%d", &idade);

  // Programação defensiva

  while (idade < 5) {
    printf("Por favor, insira uma idade válida (maior que cinco anos): ");
    scanf("%d", &idade);
  }

  classificação = classificar(idade);

  // Impressão do resultado

  printf("O nadador faz parte da classe %c", classificação);

  return 0;
}