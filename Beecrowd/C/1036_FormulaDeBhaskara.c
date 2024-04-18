/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo
*/

#include <stdio.h>
#include <math.h>

void LerValores(double *n1, double *n2, double *n3) {
    scanf("%lf %lf %lf", n1, n2, n3);
}

void CalculaBhaskara(double *n1, double *n2, double *n3, double *r1, double *r2) {
    double delta;
    
    delta = pow(*n2, 2) - (4 * (*n1) * (*n3));
    
    if ((*n1 != 0) && (delta >= 0)) {
        *r1 = (-(*n2) + sqrt(delta)) / (2 * (*n1));
        *r2 = (-(*n2) - sqrt(delta)) / (2 * (*n1));
        printf("R1 = %.5lf\n", *r1);
        printf("R2 = %.5lf\n", *r2);
    }
    else {
        printf("Impossivel calcular\n");   
    }
}

int main() {
    double a, b, c, r1, r2;
    
    LerValores(&a, &b, &c);
    CalculaBhaskara(&a, &b, &c, &r1, &r2);
    
    return 0;
}