#include <stdio.h>

//Início do Programa: Jogo de Xadrez//

int main() {

//Variáveis//

    int bispo = 0, torre = 0, rainha = 0;

//Estrutura de repetição "for"//

    for  (bispo = 0; bispo < 5; bispo++){
        printf("O Bispo moveu-se para a direcao: CIMA DIREITA\n");
        
    }

//Printf para pular uma linha e deixar a execução do programa mais organizada//

    printf("\n");

//Estrutura de repetição "while"//

    while (torre < 5) {
        printf("A Torre moveu-se para a direcao: DIREITA\n");
        torre++;

    }

//Printf para pular uma linha e deixar a execução do programa mais organizada//

    printf("\n");

//Estrutura de repetição "do while"//    

    do {
        printf("A Rainha moveu-se para a direcao: ESQUERDA\n");
        rainha++;
    } while (rainha < 8);

    return 0;  

}