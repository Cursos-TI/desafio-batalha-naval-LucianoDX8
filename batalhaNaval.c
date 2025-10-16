#include <stdio.h>

int main (){

    int campo [10][10];
    char  letras[10][10] = {'A','.','B','.','C','.','D','.','E','.','F','.','G','.','H','.','I','.','J','.'};

    int i, j;

    printf("-------------------------\n");
    printf("  Desafio Batalha Naval  \n");
    printf("-------------------------\n");

    //Inicializa o campo com zeros...
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            campo[i][j] = 0;
        }
    }

    //Posiciona o navio na horizontal...
    for(j = 1; j <= 3; j++){
        campo[6][j] = 3; //Alterando a posição entre o 6 e J, define se fica na horizontal ou vertical...
    }

    //Posiciona o navio na vertical...
    for(i = 1; i <= 3; i++){
        campo[i][1] = 3; //Alterando a posição entre o i e 1, define se fica na horizontal ou vertical...
    }

    // Exibe o cabeçalho das colunas (A a J)
   printf("    %s", letras);
   printf("\n");

   //Exibe a campo com a coluna numerada...
   for(i = 0; i < 10; i++){
    printf("%2d- ", i); // número da linha
    for(j = 0; j < 10; j++){
        printf("%d.", campo[i][j]);
    }
    printf("\n");
   }
    
    return 0;
}