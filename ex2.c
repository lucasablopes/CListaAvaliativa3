#include <stdio.h>

// Objetivo: A  prefeitura  de  uma  cidade  fez  uma  pesquisa  entre  os  seus  habitantes,  coletando  dados sobre  o  salário  e  número  de  filhos.  Faça um procedimento que  leia  esses  dados  para  um número  não  determinado  de  pessoas,  calcule  e  exiba a  média  de  salário  da  população  (acondição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o procedimento;
// Programador: Lucas Abreu Lopes;
// Data da escrita: 16/09/2021;
// Última atualização: 16/09/2021.

void ler_dados() {
  
  int pessoas, sumfilhos, filhos;
  double medfilhos, medsalario, sumsalario, salario;

  // Chumbar valores nas variáveis para que funcionem para contagem futuramente

  sumsalario = 0;
  pessoas = 0;
  sumfilhos = 0;

  // Leitura e avaliação de dados
  
  while (salario >= 0) {
    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    if (salario >= 0) {
      printf("Digite o número de filhos que possui: ");
      scanf("%d", &filhos);

      sumfilhos = sumfilhos + filhos;  
      sumsalario = sumsalario + salario;  
      pessoas++;
    }

    medsalario = sumsalario/pessoas;
  }  
  
  // Impressão dos resultados

  printf("A média dos salários é R$%.2lf\n", medsalario);
}

int main(void) {
  ler_dados();
  return 0;
}