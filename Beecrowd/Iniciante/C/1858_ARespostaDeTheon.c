/*
Ramsay: "(...) você vence se conseguir adivinhar quem eu sou e por que estou torturando você."
Theon deve pensar rápido e adivinhar quem é seu algoz! 
Entretanto, Ramsay já decidiu o que ele irá fazer depois que Theon der sua resposta.
Theon pode dizer que seu algoz é alguma dentre N pessoas. 
Considere que as pessoas são numeradas de 1 a N. 
Se Theon responder que seu algoz é a pessoa i, Ramsay irá atingi-lo Ti vezes.
Sua tarefa é ajudar Theon a determinar qual deve ser sua resposta de forma a minimizar o número de vezes que ele será atingido.
*/

#include <stdio.h>
 
int main() {
    int pessoas;
    scanf("%d", &pessoas); // Leitura da quantidade de pessoas
    
    int theon[pessoas];
    for (int i=0; i<pessoas; i++) {
        scanf("%d", &theon[i]);
    }
    
    int min_hits = theon[0];
    int person = 1; // Pessoas numeradas de 1 a n(pessoas)
    
    for (int i=1; i<pessoas; i++) {
        if (theon[i] < min_hits) {
            min_hits = theon[i]; // Atualiza a menor resposta
            person = i+1; // Ajusta o índice para ser a pessoa correta (1-based)
        }
    }

    printf("%d\n", person);
    
    return 0;
}