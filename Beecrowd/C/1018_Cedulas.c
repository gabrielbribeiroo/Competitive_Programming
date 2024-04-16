/*
Leia um valor inteiro. 
A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir, mostre o valor lido e a relação de notas necessárias.
*/

#include <stdio.h>
 
int main() {
    int valor, qnt_notas;
    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    
    scanf("%d", &valor);
    
    printf("%d\n", valor);
    
    for (int i=0; i<7; i++) {
        qnt_notas = valor / cedulas[i];
        valor = valor % cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", qnt_notas, cedulas[i]);
    }

    return 0;
}