#include <stdio.h>

// Objetivo: um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for ‘A’,o procedimento calcula e escreve a média aritmética das notas do aluno, se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

void limpar_entrada() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF) {}
}

void nota() {

  int nota1, nota2, nota3;
  char letra;
  double mednota;

  // Impressão de instruções na tela e leitura de dados

  printf("\nDigite a primeira nota do aluno: ");
  scanf("%d", &nota1);
  printf("Digite a segunda nota do aluno: ");
  scanf("%d", &nota2);
  printf("Digite a terceira nota do aluno: ");
  scanf("%d", &nota3);

  limpar_entrada();

  printf("Média aritimética (A) ou ponderada (P)? ");
  scanf("%c", &letra);

  // Programação defensiva

  if (letra != 'A' && letra != 'P' && letra != 'a' && letra != 'p') {
    printf("Letra inválida! Selecione A ou P para selecionar o tipo de média: ");
    scanf("%c", &letra);
  }

  // Cálculo da média

  if (letra == 'A' || letra == 'a') {
    mednota = (double)(nota1 + nota2 + nota3) / 3;
  }
  else {
    mednota = (double)((5*nota1) + (3*nota2) + (2*nota3)) / 10;
  }

  printf("A nota do aluno é %.2lf\n", mednota);
}

int main(void) {

  int alunos;

  printf("Quantos alunos serão digitados? ");
  scanf("%d", &alunos);


  for (int i = 0; i < alunos; i++) {
    nota();
  }
  
}