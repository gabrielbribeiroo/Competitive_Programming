/*
Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. 
O último dado, que não entrará nos cálculos, contém o valor de idade negativa. 
Calcular e imprimir a idade média deste grupo de indivíduos.
*/

#include <stdio.h>

void LerIdade(int *n) {
    scanf("%d", n);
}

double CalcularIdadeMedia() {
    int idade, soma = 0, cont = 0;
    
    while (1) {
        LerIdade(&idade);
        if (idade < 0) {
            break; // Se a idade for negativa, sai do loop
        }
        soma += idade;
        cont++;
    }
    
    if (cont == 0) {
        return 0; // Evita dividir por zero se nenhum número válido for lido
    }
    
    double media = (double) soma / cont;
    
    return media;
}

void MostrarMedia(double m) {
    printf("%.2lf\n", m);
}
 
int main() {
    double media = CalcularIdadeMedia();
    MostrarMedia(media);
    
    return 0;
}