/*
Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro N e depois N valores. 
O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. 
Por exemplo, suponhamos que um participante sorteia N = 11 e, nesta ordem, os valores:
30, 30, 30, 30, 40, 40, 40, 40, 40, 30, 30
Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. 
Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.
Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.
*/

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int num[n];
    for (int i=0; i<n; i++) {
        scanf("%d ", &num[n]); // Leitura de todos os valores da sequência    
    }
    
    int max = 1; // Menor valor possível de valores iguais
    int atual = 1; // Próximo elemento da sequência
    
    for (int i=1; i<n; i++) {
        if (num[i] == num[i-1]) {
            atual++;
        }
        else {
            if (atual > max) {
                max = atual; // Atualiza o maior valor de elementos consecutivos
            }
            atual = 1; // Reinicializa o contador
        }
    }
    
    if (atual > max) {
        max = atual;
    }
    
    printf("%d\n", max);
    
    return 0;
}