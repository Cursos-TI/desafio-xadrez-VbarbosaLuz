#include <stdio.h>

int main (){

    int Torre = 1, bisbo = 1, cavalo = 1, rainha;
    char direcao1, direcao2;

    
    printf("Movendo peças de Xadrez:\n");
    printf("Movendo a Torre...\n");

    //Mover torre 5 casas para Direita:
    while (Torre <=5 )
    {
        printf("Direita\n");
        Torre++;
    }
    printf("Movendo o bispo...\n");
    //Mover bispo 5 casas na diagonal:
    do
    {
        printf("Cima Direita\n");
        bisbo++;
    } while (bisbo <=5);
    
    printf("Movendo a rainha...\n");
    // Mover Rainha 8 casas para a direita:

    for (rainha =1 ; rainha < 8; rainha++)
    {
        printf("Direita\n");
    }
    
    printf("Movendo o Cavalo\n");
    //Mover cavalo em L (Duas casas para baixo e uma para esquerda)
    while (cavalo--) 
    {
        for (int i = 0 ; i < 2; i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }


    return 0;

}