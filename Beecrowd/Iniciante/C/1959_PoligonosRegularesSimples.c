/*
Na geometria Euclidiana, um polígono regular é um polígono em que todos os ângulos são iguais e todos os lados tem o mesmo comprimento. 
Um polígono simples é aquele cujos segmentos de reta não se interceptam. 
Abaixo pode-se ver vários mosaicos feitos por polígonos regulares.
Você deve escrever um programa que, dados o número e o comprimento dos lados de um polígono regular, mostre seu perímetro.
*/

#include <stdio.h>
 
int main() {
    int lados, comprimento;
    
    scanf("%d %d", &lados, &comprimento); // Leitura do número de lados e o comprimento de cada um
    
    long long int perimetro = (long long int) lados * comprimento; // Calcula o perímetro usando long long int para garantir que o valor caiba na variável
    
    printf("%lld\n", perimetro); // Imprime o perímetro da figura (lados x perímetro)
    
    return 0;
}