/*
Dois amigos pedem ao atendente de uma lanchonete propor um desafio, de modo que quem acertasse mais, não precisaria pagar a conta. 
Então foi proposto o seguinte: 
Dado o seguinte somatório abaixo, informar o resultado, com uma quantidade de termos no mesmo:
S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ...
Escreva um programa que, dada uma quantidade de termos, informar o resultado do somatório acima.
*/

#include <stdio.h>
 
int main() {
    int qnt_teste, num;
    
    scanf("%d", &qnt_teste);
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%d", &num); // Leitura da quantidade de termos do somatório
        printf("%d\n", num%2); // Retorna 1 se o número for ímpar e 0 se for par
    }
    
    return 0;
}