/*
Parte do treinamento de um novo garçom é carregar uma grande bandeja com várias latas de bebidas e copos e entregá-las todas numa mesa do restaurante. 
Durante o treinamento, é comum que os garçons deixem cair as bandejas, quebrando todos os copos.
A SBC - Sociedade Brasileira de Copos - analisou estatísticas do treinamento de diversos garçons e descobriu que os garçons em treinamento deixam cair apenas bandejas que têm mais latas de bebidas que copos.
Por exemplo, se uma bandeja tiver 10 latas e 4 copos, certamente o garçom em treinamento a deixará cair, quebrando os 4 copos. 
Já se a bandeja tiver 5 latas e 6 copos, ele conseguirá entregá-la sem deixar cair.
Escreva um programa que, dado o número de latas e copos em cada bandeja que o garçom tentou entregar, imprime o total de copos que ele quebrou.
*/

#include <stdio.h>
 
int main() {
    int bandejas, latas, copos, tot_quebrados = 0;
    
    scanf("%d", &bandejas);
    
    for (int i=0; i<bandejas; i++) {
        scanf("%d %d", &latas, &copos); // Leitura do número de latas e copos de cada bandeja
        
        // Verifica se o garçom derruba os copos
        if (latas > copos) {
            tot_quebrados += copos;
        }
    }
    
    printf("%d\n", tot_quebrados); // Mostra a quantidade de copos quebrados
    
    return 0;
}