#include <stdio.h>

// Objetivo: Um procedimento que  recebe  3  valores  reais  X,  Y  e  Z  e  que  verifique  se  esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo  de  triângulo  formado. Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e para cada triângulo, acione o procedimento;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

void lados() {

  int lado1, lado2, lado3;

  // Impressão de instruções na tela e leitura de dados

  printf("\nDigite o primeiro lado: ");
  scanf("%d", &lado1);
  printf("Digite o segundo lado: ");
  scanf("%d", &lado2);
  printf("Digite o terceiro lado: ");
  scanf("%d", &lado3);

  // Teste da condição de existência e identificação do triângulo

  if (lado1 + lado3 > lado2 && lado1 + lado2 > lado3 && lado2 + lado3 > lado1) {
    if (lado1 == lado2 && lado1 == lado3) {
      printf("É um triângulo equilátero.\n");
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
      printf("É um triângulo escaleno.\n");
    }
    else {
      printf("É um triângulo isósceles.\n");
    }
  }
  else {
    printf("Não é possível construir um triângulo com as medidas fornecidas.\n");
  }

}

int main(void) {

  int N;

  printf("Quantos triângulos serão digitados? ");
  scanf("%d", &N);


  for (int i = 0; i < N; i++) {
    lados();
  }

  return 0;
}