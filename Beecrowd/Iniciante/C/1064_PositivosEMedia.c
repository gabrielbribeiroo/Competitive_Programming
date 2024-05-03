/*
Leia 6 valores. 
Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
*/

#include <stdio.h>

#define QUANTIDADE 6

void LerValores(double *num) {
    for (int i=0; i<QUANTIDADE; i++) {
        scanf("%lf", &num[i]);
    }
} 

int QuantidadePositivos(double *num) {
    int qnt_positivos = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] > 0) {
            qnt_positivos++;
        }
    }
    
    return qnt_positivos;
}

double CalcularSomaPositivos(double *num) {
    double soma_positivos = 0;
    
    for (int i=0; i<QUANTIDADE; i++) {
        if (num[i] > 0) {
            soma_positivos += num[i];   
        }
    }
    
    return soma_positivos;
}

double CalcularMedia(double *num, double *soma, int *qnt_positivos) {
    double media;
    
    for (int i=0; i<QUANTIDADE; i++) {
        media = (*soma) / (*qnt_positivos);   
    }
    
    return media;
}

void MostrarQuantidadePositivos(int *c) {
    printf("%d valores positivos\n", *c);
}

void MostrarMedia(double *media) {
    printf("%.1lf\n", *media);
}

int main() {
    double numeros[QUANTIDADE], soma, media;
    int qnt_positivos;
    
    LerValores(numeros);
    qnt_positivos = QuantidadePositivos(numeros);
    soma = CalcularSomaPositivos(numeros);
    media = CalcularMedia(numeros, &soma, &qnt_positivos);
    MostrarQuantidadePositivos(&qnt_positivos);
    MostrarMedia(&media);

    return 0;
}