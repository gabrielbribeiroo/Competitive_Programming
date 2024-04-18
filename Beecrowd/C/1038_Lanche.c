/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 

CÓDIGO      ESPECIFICAÇÃO          PREÇO
1           Cachorro Quente         R$ 4.00
2           X-Salada                R$ 4.50
3           X-Bacon                 R$ 5.00
4           Torrada simples         R$ 2.00
5           Refrigerante            R$ 1.50

A seguir, calcule e mostre o valor da conta a pagar.
*/

#include <stdio.h>

void LerProduto(int *n, int *q) {
    scanf("%d %d", n, q);
}

void CalcularConta(int *n, int *q, float *v) {
    switch(*n) {
        case 1:
            *v = *q * 4;
            break;
        case 2:
            *v = *q * 4.5;
            break;
        case 3:
            *v = *q * 5;
            break;
        case 4:
            *v = *q * 2;
            break;
        case 5:
            *v = *q * 1.5;
            break;
    }
}

void MostrarConta(float *v) {
    printf("Total: R$ %.2f\n", *v);
} 


int main() {
    int cod, qnt;
    float valor;
    
    LerProduto(&cod, &qnt);
    CalcularConta(&cod, &qnt, &valor);
    MostrarConta(&valor);
    
    return 0;
}