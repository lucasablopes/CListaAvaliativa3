#include <stdio.h>
#include <stdbool.h> 

// Objetivo: Uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A  função  deve  retornar  um  valor  lógico  (true  ou  false).  Faça  um  programa  que  lê  N números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado verdadeiro ou falso pela função.
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

bool posneg(int num) {

  bool positivo;

  // Teste positivo/negativo

  if (num < 0) {
    positivo = false;
  }
  else {
    positivo = true;
  }

return(positivo);
}

int main(void) {

  int num, N;

  // Impressão de instruções e coleta de dados

  printf("Quantos números serão digitados? ");
  scanf("%d", &N);

  // Repetição para conferir números positivos e negativos

  for (int i = 0; i < N; i++) {
    printf("Digite o número: ");
    scanf("%d", &num);
    if (posneg(num) == true) {
      printf("O número é positivo.\n");
    }
    else {
      printf("O número é negativo\n");
    }
  }

  return 0;
}