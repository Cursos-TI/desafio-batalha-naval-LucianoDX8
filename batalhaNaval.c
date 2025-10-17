#include <stdio.h>

int main (){

    int campo [10][10];
    char  letras[10][10] = {'A','.','B','.','C','.','D','.','E','.','F','.','G','.','H','.','I','.','J','.'};

    int i, j, a;

    printf("-------------------------\n");
    printf("  Desafio Batalha Naval  \n");
    printf("-------------------------\n");

    //Inicializa o campo com zeros...
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            campo[i][j] = 0;
        }
    }


    //---------  Criando a Cruz
    //Posiciona o navio na horizontal...
    for(j = 1; j <= 5; j++){
        campo[2][j] = 3; //Alterando a posição entre o 6 e J, define se fica na horizontal ou vertical...
    }

    //Posiciona o navio na vertical...
    for(i = 0; i <= 4; i++){
        campo[i][3] = 3; //Alterando a posição entre o i e 1, define se fica na horizontal ou vertical...
    }


    //--------  Criando o Triângulo
    //Posiciona o navio na horizontal...
    for(j = 3; j <= 3; j++){
        campo[7][j] = 3; //Alterando a posição entre o 6 e J, define se fica na horizontal ou vertical...
    }
    //Posiciona o navio na horizontal...
    for(j = 2; j <= 4; j++){
        campo[8][j] = 3; //Alterando a posição entre o 6 e J, define se fica na horizontal ou vertical...
    }
    //Posiciona o navio na horizontal...
    for(j = 1; j <= 5; j++){
        campo[9][j] = 3; //Alterando a posição entre o 6 e J, define se fica na horizontal ou vertical...
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