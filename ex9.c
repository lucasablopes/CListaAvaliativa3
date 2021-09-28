#include <stdio.h>

// Objetivo: uma função que lê um número indeterminado de notas de alunos, calcula e retorna a média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê o número de alunos e imprime a média retornada pela função;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

double medNotasAprovados(int alunos) {

  double medNotas;
  int nota, notasacima, pessoasacima;

  // Cálculo da média das notas dos alunos aprovados

  notasacima = 0;
  pessoasacima = 0;

  for (int i = 0; i < alunos; i++) {
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);
    if (nota >= 6) {
      pessoasacima++;
      notasacima = notasacima + nota;
    }
  }

  medNotas = (double)notasacima/pessoasacima;

  return(medNotas);
}

int main(void) {

  int alunos;
  double medNotas;

  // Impressão de instruções e coleta de dados

  printf("Quantos alunos serão digitados? ");
  scanf("%d", &alunos);

  medNotas = medNotasAprovados(alunos);

  // Impressão do resultado

  printf("A média das notas dos alunos que foram aprovados %.2lf", medNotas);

  return 0;
}