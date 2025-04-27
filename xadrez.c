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

i = 1;
while (i <= 5) {
    printf("Cima");

    int j = 1;
    while (j <= 5) {
        if (j == 1) {
            printf("-Direita");
        }
        j++;
    }

    printf("\n");
    i++;
}
    // Implementação de Movimentação da Rainha

    printf("Terceira peça do xadrez: **A Rainha**\n");

i = 1; // variavel de incremento
do {
    printf("Esquerda\n",i);
    i++;
}   while (i <=8 );






    // Nível Aventureiro - Movimentação do Cavalo
    
printf("\n");
printf("**Quarta peça do xadrez: **O Cavalo**\n");

    for (int i = 1; i <= 2; i++) {
       printf("Baixo\n");
            if (i == 2){
    for (int j = 1; j <= 1; j++);
    printf("Esquerda\n");
            }
        }
        printf("\n");
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
