#include <stdio.h>
// função recursiva da Torre
void moverTorre(int i){
    if (i == 0) return;
    printf("Direita\n");
    moverTorre(i - 1); 
}
// função recursiva do Bispo 
void moverBispo(int i, int j) {
    if (i == 0) return;  

    // Loop externo vertical (Cima)
    for (int vertical = 1; vertical <= i; vertical++) {
        printf("Cima");
        
        // Loop interno horizontal (Direita)
        for (int horizontal = 1; horizontal <= j; horizontal++) {
            if (horizontal == 1) {
                printf("-Direita");
            }
        }

        printf("\n");
    }


}

// função recursiva da Rainha
void moverRainha(int i){
    if (i > 8) return;
    printf("Esquerda\n");
    moverRainha(i + 1);
}

// função recusiva do Cavalo 
void moverCavalo(int i, int j){
    if (i > 1) return;
    printf("Cima\n");
    printf("Cima\n");
    printf("Direita\n");
    
    if (i == 1) return;

    moverCavalo(i + 1, j + 1);
}
int main (){
    int i;
    int j;

printf("Primeira peça do xadrez: **A Torre**\n");
// Movendo a torre 5 casas para a direita
moverTorre(5);

 printf("\n");
printf("Segunda peça do xadrez: **O Bispo**\n");
// o movimento do Bispo cinco casas na diagonal para cima e à direita
moverBispo(5,1);

printf("\n");
printf("Terceira peça do xadrez: **A Rainha**\n");
moverRainha(1);

printf("\n");
printf("**Quarta peça do xadrez: O Cavalo**\n");
moverCavalo(1,1);

 return 0;
 }

