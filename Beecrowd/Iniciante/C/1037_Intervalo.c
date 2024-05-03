/*
Fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos, o valor se encontra:
    - [0,25];
    - (25,50];
    - (50,75];
    - (75,100]);
    
Obviamente, se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.
O símbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000
*/

#include <stdio.h>

void LerValor(double *n) {
    scanf("%lf", n);
}

void CalcularIntervalo(double *n) {
    if ((*n >= 0) && (*n <= 25)) {
        printf("Intervalo [0,25]\n");
    }
    else {
        if ((*n > 25) && (*n <= 50)) {
            printf("Intervalo (25,50]\n");
        }
        else {
            if ((*n > 50) && (*n <= 75)) {
                printf("Intervalo (50,75]\n");
            }
            else {
                if ((*n > 75) && (*n <= 100)) {
                    printf("Intervalo (75,100]\n");
                }
                else {
                    printf("Fora de intervalo\n");
                }
            }
        }
    }
}

int main() {
    double num;
    
    LerValor(&num);
    CalcularIntervalo(&num);
    
    return 0;
}