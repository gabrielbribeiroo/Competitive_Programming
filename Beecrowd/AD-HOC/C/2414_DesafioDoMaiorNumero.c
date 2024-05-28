/*
Leonardo é um garoto muito criativo. 
Ele adora criar desafios para seus colegas da escola. 
Seu último desafio é o seguinte: diversos números são ditos em voz alta, quando o número 0 (zero) é dito, então o desafio termina e seus colegas devem dizer imediatamente qual foi o maior número. 
Leonardo tem muita dificuldade de verificar se a resposta dada pelos colegas é correta ou não, pois a sequência de números costuma ser longa.
Por este motivo, ele resolveu pedir sua ajuda.
Sua tarefa é escrever um programa que dada uma sequência de números inteiros positivos terminada por 0 (zero), imprime o maior número da sequência.
*/

#include <stdio.h>

int main() {
    int num;
    int max_num = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num > max_num) {
            max_num = num;
        }
    }

    printf("%d\n", max_num);

    return 0;
}