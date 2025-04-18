#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Funções Recursivas e Loops Aninhados
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispo(int B) {                 // Procedimento(função) para o movimento do bispo
  if (B > 0) {                      // Condição de parada
    for (int i = 1; i <= 1; i++) {  // Loop aninhado com apenas um passo vertical
      printf("Direita\n");          // Movimento horizontal
    }
    printf("Cima\n");  // Movimento vertical
    bispo(B - 1);      // Chamada recursiva para continuar os movimentos
  }
}


void torre(int T) {       // Procedimento(função) para o movimento da torrre
  if (T > 0) {            // Condição de parada
    printf("Direita\n");  // Movimento horizontal
    torre(T - 1);         // Chama a si mesma com T - 1
  }
}


void rainha(int R) {       // Procedimento(função) para o movimento da rainha
  if (R > 0) {             // Condição de parada
    printf("Esquerda\n");  // Movimento horizontal
    rainha(R - 1);         // Chama a si mesma com R - 1
  }
}

int main() {

  // Nível Novato - Movimentação das Peças
  // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
  int casasBispo = 3, casasTorre = 5, casasRainha = 8;
  int contadorBispo = 1, contadorTorre = 1, contadorRainha = 1;

  // Implementação de Movimentação do Bispo
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
  printf("Movimento do Bispo: \n");
  bispo(casasBispo);  // Simula 3 movimentos diagonais

  // Implementação de Movimentação da Torre
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
  printf("\nMovimento da Torre: \n");
  torre(casasTorre);  // Chamada da função recursiva passando o número de casas

  // Implementação de Movimentação da Rainha
  // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
  printf("\nMovimento da Rainha:\n");
  rainha(casasRainha);  // Chamada da função recursiva com o número de casas

  // Implementação de Movimentação do Cavalo
  // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
  // Um loop pode representar a movimentação horizontal e outro vertical.
  // Inclua o uso de continue e break dentro dos loops.

  printf("\nMovimento do Cavalo:\n");

  // Loop 'for' com condições múltiplas: i (para cima) e j (para direita)
  for (int i = 1, j = 1; i <= 10 || j <= 10;) {  // Condição ampla para garantir execução; controle real é feito por if + break
    if (i <= 2) {                                // Se ainda não fez os dois movimentos para cima
      printf("Cima\n");                          // Imprime a direção "Cima"
      i++;                                       // Incrementa o contador i (movimento para cima)
      continue;                                  // Volta para o início do loop sem executar o restante
    }
    if (j <= 1) {           // Após fazer os dois movimentos para cima, verifica se pode ir para a direita
      printf("Direita\n");  // Imprime a direção "Direita"
      j++;                  // Incrementa o contador j (movimento para a direita)
    }
    break;  // Encerra o loop após completar o movimento em "L"
  }

  return 0;  // Fim do programa
}