/*
Gilberto é um famoso vendedor de esfirras na região. 
Porém, apesar de todos gostarem de suas esfirras, ele só sabe dar o troco com duas notas, ou seja, nem sempre é possível receber o troco certo. 
Para facilitar a vida de Gil, escreva um programa para ele que determine se é possível ou não devolver o troco exato utilizando duas notas.
As notas disponíveis são: 2, 5, 10, 20, 50 e 100.
*/

#include <stdio.h>
 
int is_possible(int troco) {
    int notas[] = {2, 5, 10, 20, 50, 100};
    int num_notas = sizeof(notas) / sizeof(notas[0]);
    
    for (int i=0; i<num_notas; i++) {
        for (int j=i; j<num_notas; j++) {
            if (notas[i] + notas[j] == troco) {
                return 1; // True
            }
        }
    }
    
    return 0; // False
}


int main() {
    int compra, montante;
    
    while (1) {
        scanf("%d %d", &compra, &montante); // Leitura dos valores da compra e do valor pago pelo cliente
        
        if (compra==0 && montante==0) {
            break; // Para a execução do loop
        }
        
        int troco = montante - compra; 
        if (is_possible(troco)) {
            printf("possible\n");
        }
        else {
            printf("impossible\n");
        }
    }
    
    return 0;
}