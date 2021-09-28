#include <stdio.h>

// Objetivo: Um procedimento que  recebe  a  média  final  de  um  aluno,  identifica  e  exibe o  seu conceito, conforme  a  tabela  abaixo.  Faça  um  programa  que  leia  a  média  de  N  alunos, acionando oprocedimentopara cada um deles. (N deve ser lido do teclado);
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

void notas() {

  double nota;

  // Impressão de instruções na tela e leitura de dados

  printf("\nDigite a média final do aluno: ");
  scanf("%lf", &nota);

  // Relacionamento da nota com o conceito

  if (nota <= 39) {
    printf("Conceito: F\n");
  }
  else if (nota <= 59) {
    printf("Conceito: E\n");
  }
  else if (nota <= 69) {
    printf("Conceito: D\n");
  }
  else if (nota <= 79) {
    printf("Conceito: C\n");
  }
  else if (nota <= 89) {
    printf("Conceito: B\n");
  }
  else {
    printf("Conceito: A\n");
  }

}

int main(void) {

  int N;

  printf("Quantas médias finais serão digitadas? ");
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    notas();
  }

  return 0;
}