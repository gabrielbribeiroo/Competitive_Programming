/*
Uma partícula tem velocidade inicial e aceleração constante. 
Se a sua velocidade após certo momento é v então qual será seu deslocamento no dobro deste tempo?

Entrada
A entrada contém vários casos de teste. 
Cada linha da entrada é um caso de teste e contém dois inteiros v (-100 ≤ v ≤ 100) e t (0 ≤ t ≤ 200) ( t significa o momento no qual a partícula ganha aquela velocidade). 
O final da entrada é determinado por EOF.

Saída
Para cada linha de entrada imprima um único inteiro que denota o deslocamento no dobro do tempo fornecido.
*/
#include <stdio.h>
 
int main() {
    int velocidade, tempo;
    
    while (scanf("%d %d", &velocidade, &tempo) != EOF) {
        printf("%d\n", velocidade*tempo*2);
    }
    
    return 0;
}