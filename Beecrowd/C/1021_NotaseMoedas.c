/*
Leia um valor de ponto flutuante com duas casas decimais. 
Este valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
A seguirm, mostre a relação de notas necessárias.
*/

#include <stdio.h>

void LerNumero(double *num) {
    double x;
    scanf("%lf", &x);
    *num = x;
}

void QuantidadeNotas(double *num, int *c100, int *c50, int *c20, int *c10, int *c5, int *c2) {
    double x = *num;

    while (x >= 100) {
        x -= 100;
        (*c100)++;
    }

    while (x >= 50) {
        x -= 50;
        (*c50)++;
    }

    while (x >= 20) {
        x -= 20;
        (*c20)++;
    }

    while (x >= 10) {
        x -= 10;
        (*c10)++;
    }

    while (x >= 5) {
        x -= 5;
        (*c5)++;
    }

    while (x >= 2) {
        x -= 2;
        (*c2)++;
    }

    *num = x;
}

void QuantidadeMoedas(double *num, int *m1, int *m050, int *m025, int *m010, int *m005, int *m001) {
    double x = *num;

    while (x >= 1) {
        x -= 1;
        (*m1)++;
    }

    while (x >= 0.50) {
        x -= 0.50;
        (*m050)++;
    }

    while (x >= 0.25) {
        x -= 0.25;
        (*m025)++;
    }

    while (x >= 0.10) {
        x -= 0.10;
        (*m010)++;
    }

    while (x >= 0.05) {
        x -= 0.05;
        (*m005)++;
    }

    while (x >= 0.01) {
        x -= 0.01;
        (*m001)++;
    }

    *num = x;
}

void MostraNotas(double *num, int *c100, int *c50, int *c20, int *c10, int *c5, int *c2) {
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", *c100);
    printf("%d nota(s) de R$ 50.00\n", *c50);
    printf("%d nota(s) de R$ 20.00\n", *c20);
    printf("%d nota(s) de R$ 10.00\n", *c10);
    printf("%d nota(s) de R$ 5.00\n", *c5);
    printf("%d nota(s) de R$ 2.00\n", *c2);
}

void MostraMoedas(double *num, int *m1, int *m050, int *m025, int *m010, int *m005, int *m001) {
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", *m1);
    printf("%d moeda(s) de R$ 0.50\n", *m050);
    printf("%d moeda(s) de R$ 0.25\n", *m025);
    printf("%d moeda(s) de R$ 0.10\n", *m010);
    printf("%d moeda(s) de R$ 0.05\n", *m005);
    printf("%d moeda(s) de R$ 0.01\n", *m001);
}

int main() {
    double n;
    int ced100 = 0, ced50 = 0, ced20 = 0, ced10 = 0, ced5 = 0, ced2 = 0;
    int m1 = 0, m050 = 0, m025 = 0, m010 = 0, m005 = 0, m001 = 0;

    LerNumero(&n);
    QuantidadeNotas(&n, &ced100, &ced50, &ced20, &ced10, &ced5, &ced2);
    QuantidadeMoedas(&n, &m1, &m050, &m025, &m010, &m005, &m001);
    MostraNotas(&n, &ced100, &ced50, &ced20, &ced10, &ced5, &ced2);
    MostraMoedas(&n, &m1, &m050, &m025, &m010, &m005, &m001);

    return 0;
}