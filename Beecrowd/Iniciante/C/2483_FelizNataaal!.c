/*
Você fica tão feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". 
Pra colocar toda essa felicidade pra fora, você montou um programa que, colocado um índice I de felicidade, seu grito de natal é mais animado.
*/

#include <stdio.h>
 
int main() {
    int felicidade;
    scanf("%d", &felicidade); // Leitura do índice de felicidade
    
    printf("Feliz nat"); // Imprime a parte fixa da frase
    
    for (int i=0; i<felicidade; i++) {
        printf("a"); // Imprime a letra 'a' repetidas vezes
    }
    
    printf("l!\n"); // Imprime a parte final da frase
 
    return 0;
}