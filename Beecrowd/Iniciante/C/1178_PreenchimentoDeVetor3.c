/*
Leia um valor X. 
Coloque este valor na primeira posição de um vetor N[100]. 
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. 
Imprima o vetor N.

Exemplo de Entrada	Exemplo de Saída
200.0000            N[0] = 200.0000
                    N[1] = 100.0000
                    N[2] = 50.0000
                    N[3] = 25.0000
                    N[4] = 12.5000
                    ...
*/

#include <stdio.h>
 
#define MAX 100

void LerValorInicial(double *x) {
    scanf("%lf", x);
}

void PreencherVetor(double *n, double x) {
    for (int i=0; i<MAX; i++) {
        if (i == 0) {
            n[i] = x;
        }
        else {
            n[i] = x / 2.0;
            x = n[i];
        }
    }
}

void MostrarVetor(double *n) {
    for (int i=0; i<MAX; i++) {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
}
 
int main() {
    double vetor[MAX], valor_inicial;
    
    LerValorInicial(&valor_inicial);
    PreencherVetor(vetor, valor_inicial);
    MostrarVetor(vetor);

    return 0;
}