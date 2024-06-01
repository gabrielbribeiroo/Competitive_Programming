/*
Odin criou para Thor a mais fiel e poderosa arma possível, o martelo Mjölnir. 
Feito de um minério místico especial chamado Uru e forjado no coração de uma estrela pelos Deuses ferreiros de Asgard, Brokk e Eitri, os lendários ferreiros.
Um dia, Thor desafiou seus amigos para ver quem conseguia levantar o Mjölnir.
Escreva um programa que, dado um nome, e a força, em Newtons, aplicado ao tentar levantar o Mjölnir, informar se a pessoa conseguiu ou não levantá-lo.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int qnt_teste;
    scanf("%d", &qnt_teste); // Leitura da quantidade de casos de teste
    
    char nome[100];
    int newton;
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%s %d", &nome, &newton); // Leitura do nome e da força aplicada
        
        // Verifica se é Thor ou se a força é suficiente para levantar o martelo
        if (strcmp(nome, "Thor") == 0) {
            printf("Y\n"); // Consegue levantar
        } 
        else {
            if (newton >= 20000) {
                printf("Y\n"); // Consegue levantar
            } 
            else {
                printf("N\n"); // Não consegue levantar
            }
        }
    }
    
    return 0;
}