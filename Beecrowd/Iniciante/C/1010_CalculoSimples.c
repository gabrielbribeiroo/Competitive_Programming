/*
Neste problema, deve-se ler:
    - o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1;
    - o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. 
Após isso, calcule e mostre o valor a ser pago.
*/

#include <stdio.h>
 
int main() {
    // Declaração das variáveis
    int cod_1, qnt_1, cod_2, qnt_2; 
    float val_1, val_2, tot; 
    
    // Leitura dos códigos dos produto 1 e 2, seus números de peças e valores unitários 
    scanf("%d %d %f", &cod_1, &qnt_1, &val_1); 
    scanf("%d %d %f", &cod_2, &qnt_2, &val_2);
    
    // Cálculo do valor a ser pago
    tot = ((qnt_1 * val_1) + (qnt_2 * val_2));
    
    // Mostra valor total
    printf("VALOR A PAGAR: R$ %.2f\n", tot);
    
    return 0;
}