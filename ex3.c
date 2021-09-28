#include <stdio.h>

// Objetivo: Um procedimentoque recebe 3 valores inteiros por parâmetro e os  exiba em ordem crescente.  Faça  um  programa  que  leia  N  conjuntos  de  3  valores  e  acione o  procedimento para cada conjunto. (N deve ser lido do teclado);
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

void valores() {

  int valor1, valor2, valor3, valormaior, valormedio, valormenor;

  // Impressão de instruções na tela e leitura de dados

  printf("\nDigite o primeiro valor: ");
  scanf("%d", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &valor3);

  // Teste maior/medio/menor
  // Maior

  if (valor1 > valor2 && valor1 > valor3) {
    valormaior = valor1;
  }
  else if (valor2 > valor3) {
    valormaior = valor2;
  }
  else {
    valormaior = valor3;
  }

  // Menor

  if (valor1 < valor2 && valor1 < valor3) {
    valormenor = valor1;
  }
  else if (valor2 < valor3) {
    valormenor = valor2;
  }
  else {
    valormenor = valor3;
  }

  // Médio

  if (valormenor == valor1 || valormaior == valor1) {
    if (valormenor == valor2 || valormaior == valor2) {
      valormedio = valor3;
    }
    else {
      valormedio = valor2;
    }
  }
  else {
    valormedio = valor1;
  }

  // Impressão dos resultados

  printf("Os valores, em ordem crescente, são: %d, %d e %d\n", valormenor, valormedio, valormaior);
}

int main(void) {

  int N;

  printf("Quantos conjuntos serão digitados? ");
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    valores();
  }
}