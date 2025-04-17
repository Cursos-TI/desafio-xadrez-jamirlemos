#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

  // Nível Novato - Movimentação das Peças
  // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
  int casasBispo = 3, casasTorre = 5, casasRainha = 8;
  int contadorBispo = 1, contadorTorre = 1, contadorRainha = 1;

  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
  printf("Movimento do Bispo: \n");
  while (contadorBispo <= casasBispo) {                // Estrutura 'while'
    printf("Casa %d: Cima Direita\n", contadorBispo);  // Exibe a direção com número
    contadorBispo++;                                   // Incrementa o contador
  }

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
  printf("\nMovimento da Torre: \n");
  for (contadorTorre = 1; contadorTorre <= casasTorre; contadorTorre++) {  // Estrutura 'for'
    printf("Casa %d: Direita\n", contadorTorre);                           // Exibe o número da casa e a direção
  }

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
  printf("\nMovimento da Rainha:\n");
  do {                                              // Estrutura 'do-while'
    printf("Casa %d: Esquerda\n", contadorRainha);  // Exibe a direção com número
    contadorRainha++;                               // Incrementa o contador
  } while (contadorRainha <= casasRainha);          // Verifica a condição


  // Nível Aventureiro - Movimentação do Cavalo
  // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
  // Um loop pode representar a movimentação horizontal e outro vertical.

  // Nível Mestre - Funções Recursivas e Loops Aninhados
  // Sugestão: Substitua as movimentações das peças por funções recursivas.
  // Exemplo: Crie uma função recursiva para o movimento do Bispo.

  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
  // Inclua o uso de continue e break dentro dos loops.

  return 0;  // Fim do programa
}