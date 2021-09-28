#include <stdio.h>
#include <math.h>

// Objetivo: uma funçãoque recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S, calculado segundo a fórmula abaixo. S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n²+1)/(n+3)Faça um programa que leia N e imprima o valor retornado pela função;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

double calculoS(int n) {

  double S;

  // Cálculo de S
  
  S = 0;

  for (int i = 1; i <= n; i++) {
    S = S + (pow(i, 2)+1)/(i+3);
  }

  return(S);
}

int main(void) {

  int n;
  double S;

  // Impressão de instruções na tela e leitura de dados

  printf("Informe o valor de n: ");
  scanf("%d", &n);

  // Chamada da função

  S = calculoS(n);

  // Impressão do resultado
  
  printf("O valor retornado pela função foi: %.3lf", S);

  return 0;
}