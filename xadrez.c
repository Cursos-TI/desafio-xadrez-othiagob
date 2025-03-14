#include <stdbool.h> // Tive que incluir por que no CLion apresentou que era necessário.
#include <stdio.h>


void moverTorre(int casas, int contador) {

    if (contador >= casas) {
        return;
    }

    printf("Direita!\n");

    moverTorre(casas, contador + 1);
}

void moverBispo(int casas, int contador) {

    if (contador >= casas) {
        return;
    }

    printf("Cima e Direita\n");


    moverBispo(casas, contador + 1);
}


void moverRainha(int casas, int contador) {

    if (contador >= casas) {
        return;
    }

    printf("Esquerda\n");

 
    moverRainha(casas, contador + 1);
}


void moverBispoLoops(int casas) {
    printf("Movimento do BISPO:\n");

 
    for (int vertical = 0; vertical < casas; vertical++) {
      
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima e Direita (vertical: %d, horizontal: %d)\n", vertical + 1, horizontal + 1);
        }
    }
}

int main() {

    const int TORRE_CASAS = 5;    // 5 casas para a direita
    const int BISPO_CASAS = 5;    // 5 casas diagonal cima e direita
    const int RAINHA_CASAS = 8;   // 8 casas para a esquerda


    printf("Movimento do BISPO (recursivo):\n");
    moverBispo(BISPO_CASAS, 0);
    printf("\n");

    printf("Movimento da Torre (recursivo): \n");
    moverTorre(TORRE_CASAS, 0);
    printf("\n");

    
    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(RAINHA_CASAS, 0);
    printf("\n");


    moverBispoLoops(BISPO_CASAS);
    printf("\n");

  
    printf("Movimento do CAVALO (aprimorado):\n");

    
    const int passos_cima = 2;
    const int passos_direita = 1;

   
    int i = 0, j = 0;
    bool movimentoCompleto = false;

    
    for (i = 0, j = 0; i <= passos_cima && !movimentoCompleto; i++) {
        // Movimento para cima
        if (i < passos_cima) {
            printf("Cima\n");
            continue; 
        }

        
        for (j = 0; j < passos_direita; j++) {
            printf("Direita\n");

            
            if (j == passos_direita - 1) {
                movimentoCompleto = true;
                break; 
            }
        }
    }

    printf("\n");

    return 0;
}

/*
Houve um auxilio de inteligencia artificil para conclusão final do código. 
No entanto, o que foi extraido da IA foi alguns conceitos e formas corretas de implementar as funções recursivas.
E também a identação, precisei de ajudar para organizar meu código para entender melhor quais os padrões que preciso seguir.
*/ 