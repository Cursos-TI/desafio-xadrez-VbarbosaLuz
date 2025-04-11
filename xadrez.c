#include <stdio.h>

int main (){

    int Torre = 1;
    int bisbo = 1;
    int Rainha;

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

    for (Rainha =1 ; Rainha < 8; Rainha++)
    {
        printf("Direita\n");
    }
    
    return 0;

}