/*
Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. 
Por exemplo, o número 6 é perfeito, pois 1+2+3 é igual a 6. 
Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.
*/

#include <stdio.h>

void LerQuantidadeTeste(int *t) {
    scanf("%d", t);
}

void VerificarNumeroPerfeito(int t) {
    int num;
    for (int i=0; i<t; i++) {
        int soma_divisores = 0;
        scanf("%d", &num);
        
        for (int j=1; j<num; j++) {
            if (num % j == 0) {
                soma_divisores += j;
            }
        }
        
        if (soma_divisores == num) {
            printf("%d eh perfeito\n", num);
        }
        else {
            printf("%d nao eh perfeito\n", num);
        }
    }
}

int main() {
    int qnt_teste;
    
    LerQuantidadeTeste(&qnt_teste);
    VerificarNumeroPerfeito(qnt_teste);
    
    return 0;
}