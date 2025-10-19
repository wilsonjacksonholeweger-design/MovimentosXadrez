#include <stdio.h>

int main(){ 

    //Movimento da Torre (for)

    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++){
        printf("Direita\n");
    }

    //Movimento do Bispo (while)

    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;

    }


    //Movimento da Rainha (do while)

    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);


    //Movimento do Cavalo

    int movimentoCavalo = 1; //Flag para contolar o movimento em 'L'
    printf("Movimento do Cavalo:\n");

    while (movimentoCavalo--)
    {
        for (int i = 0; i < 2; i++){
            printf("Baixo,\t");
        }
        printf("Esquerda\n");
    }


    return 0;




}