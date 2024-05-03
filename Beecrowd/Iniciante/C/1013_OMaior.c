/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
Utilize a fórmula:
    MaiorAB = (a+b+abs(a-b)) / 2
*Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). 
Um segundo passo, portanto é necessário para chegar no resultado esperado.
*/

#include <stdio.h>
 
int main() {
    int a, b, c, maior_ab, maior;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maior_ab = (a + b + abs(a-b)) / 2;
    maior = (maior_ab + c + abs(maior_ab - c)) / 2;
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}