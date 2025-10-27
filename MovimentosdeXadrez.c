#include <stdio.h>

//Torre (recursivide)
void moverTorre(int casas){
    if(casas > 0) {             //Condição - fim da recursão
        printf("Direita \n");   //Movimento da Torre
        moverTorre(casas - 1);  //Chamada recursiva para a próxima casa
    }
}


//Bispo (Recusivide + Loops Aninhados)
void moverBispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) { // Loop vertical (Cima)
        printf("Cima ");
        for (int j = 0; j < 1; j++) { // Loop horizontal (Direita)
            printf("Direita\n");
        }
    }
        moverBispo(casas - 1); //Chamada recursiva
    }   
}


//Rainha(Recursividade)
void moverRainha(int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
}


//CAVALO (LOOPS COMPLEXOS)
// Movimento em “L”: 2 casas para cima, 1 para a direita
void moverCavalo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("\nMovimento %d do Cavalo:\n", i);
        for (int vertical = 1, horizontal = 0; vertical <= 2; vertical++) {
            printf("Cima\n");
            
            // Se já foi o segundo movimento vertical, faz o horizontal
            if (vertical == 2) {
                for (horizontal = 1; horizontal <= 1; horizontal++) {
                    printf("Direita\n");
                    if (horizontal == 1) break; // sai do loop horizontal
                }
            }

            // continue serve para pular direto pro próximo ciclo do vertical
            continue;
        }
    }
}



int main(){ 

    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 8;
    int movimentosCavalo = 1;

    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do Cavalo ===\n");
    moverCavalo(movimentosCavalo);

    printf("\nTodos os movimentos concluídos com sucesso!\n");

    return 0;
}
