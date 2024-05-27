/*
No planeta Alpha, vive a criatura Blobs, que come precisamente 1/2 de seu suprimento de comida disponível todos os dias. 
Escreva um algoritmo que leia a capacidade inicial de suprimento de comida (em Kg), e calcule quantos dias passarão, antes que Blobs coma todo esse suprimento, até restar um quilo ou menos.
*/

#include <stdio.h>

// Função para calcular o número de dias até que a comida restante seja 1 kg ou menos
int CalcularDias(double c) {
    int dias = 0;
    
    while (c > 1.0) {
        c /= 2.0;
        dias++;
    }
    
    return dias;
}
 
int main() {
    int qnt_teste;
    double comida;
    
    scanf("%d", &qnt_teste); // Lê a quantidade de casos de teste
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%lf", &comida); // Lê a quantidade inicial de comida para cada caso de teste
        printf("%d dias\n", CalcularDias(comida)); // Chamada da função para mostrar o número de dias
    }
    
    return 0;
}