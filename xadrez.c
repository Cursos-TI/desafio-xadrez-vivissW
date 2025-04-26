#include <stdio.h>
int main() {
    // Nível Novato - Movimentação das Peças
 // Implementação de Movimentação da Torre
    #include <stdio.h>
int main (){
    int i;
    int j;

printf("Primeira peça do xadrez: **A Torre**\n");
// Movendo a torre 5 casas para a direita
for (int i = 0; i <5; i++ ) {
    printf("Direita\n");

}
 printf("\n");

     // Implementação de Movimentação do Bispo
  printf("Segunda peça do xadrez: **O Bispo**\n");

i = 1; // variavel de incremento 
while (i <= 5) {
    printf("Cima, Direita\n", i);
    i++; 
}
printf("\n");
    
    // Implementação de Movimentação da Rainha

    printf("Terceira peça do xadrez: **A Rainha**\n");

i = 1; // variavel de incremento
do {
    printf("Esquerda\n",i);
    i++;
}   while (i <=8 );




return 0;

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
