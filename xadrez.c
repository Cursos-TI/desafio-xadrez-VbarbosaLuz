#include <stdio.h>

//Função para mover a torre:
void Torre (int casastorre){
    if (casastorre > 0 ){
        printf("Direita\n");
        Torre(casastorre -1);
    }
}

// Função para mover o bispo:
void Bispo (int casasbispo){
    if (casasbispo > 0){
        printf("Cima Direita\n");
        Bispo (casasbispo -1 );
    }   
} 

//Função para mover a rainha:
void Rainha (int casasrainha){
    if (casasrainha > 0){
        printf("Esquerda\n");
        Rainha(casasrainha-1);
    }
}

int main() {

    int casastorre = 5, casasbispo = 5, casasrainha = 8;
  printf("Movendo peças de Xadrez:\n");
    //movendo a torre:
    printf("Mover torre:\n");
    Torre(casastorre);
    printf("\n");

    //movendo o bispo:
    printf("Mover bispo\n");
    Bispo(casasbispo);
    printf("\n");
    
    //movendo a rainha:
    printf("Mover rainha\n");
    Rainha(casasrainha);
    printf("\n");

    //movendo o cavalo:
     for (int i = 0 ; i < 2; i++){
            printf("Baixo\n");
        }
     printf("Esquerda\n");
    


    return 0;
}
