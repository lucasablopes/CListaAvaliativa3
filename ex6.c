#include <stdio.h>

// Objetivo: Uma funçãoque recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! Faça um programa que leia N e imprima o valor retornado pela função;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

double calculoS(int N) {

  double S, Nfatorial;

  // Cálculo fatorial e divisão

  Nfatorial = 0;
  S = 0;

  for (int i = 1; i <= N; i++) {
    if (i == 1)
    Nfatorial = i;
    else
    Nfatorial = i*Nfatorial;

    S = S + 1/Nfatorial;
  }
  
  S = S + 1;

  return(S);
}

int main(void) {

  int N;
  double S;

  // Impressão de instruções na tela e leitura de dados

  printf("Informe o valor de N: ");
  scanf("%d", &N);

  // Programação defensiva
  
  while (N < 0) {
    printf("Informe um valor positivo para N: ");
    scanf("%d", &N);
  }

  // Chamada da função

  S = calculoS(N);

  // Impressão do resultado
  
  printf("O valor retornado pela função foi: %.12lf", S);

  return 0;
}