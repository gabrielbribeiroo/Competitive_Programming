/*
Beatriz gosta muito de jogar cartas com as amigas. Para treinar memória e raciocínio lógico, ela inventou um pequeno passatempo com cartas. Ela retira as cinco primeiras cartas do topo de um baralho bem embaralhado, e as coloca em sequência, da esquerda para a direita, na mesa, com as faces voltadas para baixo.
Então ela olha, por um breve instante, cada uma das cartas da sequência (e logo as recoloca na mesa, com a face para baixo). Usando apenas a sua memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, decrescentemente, ou não está ordenada.
De tanto jogar, ela está ficando cansada, e não confia em seu próprio julgamento para saber se acertou ou errou. Por isso, ela pediu para você fazer um programa que, dada uma sequência de cinco cartas, determine se a sequência dada está ordenada crescentemente, decrescentemente, ou não está ordenada.
*/

#include <stdio.h>
 
int main() {
    int cartas[5];
    
    for (int i=0; i<5; i++) {
        scanf("%d", &cartas[i]); // Leitura das cartas
    }
    
    int crescente = 1; // Flag para verificar se está em ordem crescente
    int decrescente = 1; // Flag para verificar se está em ordem decrescente
    
    // Verificação da ordem da sequência 
    for (int i=1; i<5; i++) {
        if (cartas[i] < cartas[i--]) {
            crescente = 0; // Não está em ordem crescente 
        }
        if (cartas[i] > cartas[i--]) {
            decrescente = 0; // Não está em ordem decrescente
        }
    }
    
    // Determinar a resposta com base nas flags
    if (crescente) {
        printf("C\n");
    } 
    else {
        if (decrescente) {
            printf("D\n");
        }
        else {
            printf("N\n");
        }
    } 
    
    return 0;
}