/*
Faça um programa que leia um vetor N[20]. 
Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. 
Mostre o vetor modificado.
*/

#include <stdio.h>
 
#define MAX 20

void LerVetor(int *n) {
    for (int i=0; i<MAX; i++) {
        scanf("%d", &n[i]);
    }
}

void SubstituirVetor(int *n) {
    int j = MAX - 1;
    
    for (int i=0; i<MAX/2; i++) {
        int aux = n[i];
        n[i] = n[j];
        n[j] = aux;
        j--;
    }    
}

void MostrarVetor(int *n) {
    for (int i=0; i<MAX; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
}

int main() {
    int vetor[MAX];
    
    LerVetor(vetor);
    SubstituirVetor(vetor);
    MostrarVetor(vetor);

    return 0;
}