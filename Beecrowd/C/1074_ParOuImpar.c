/*
Leia um valor inteiro N. 
Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
*/

#include <stdio.h>

void LerValor(int *n) {
    scanf("%d", n);    
}

int EhPar(int x) {
    if (x % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int EhPositivo(int x) {
    if (x > 0) {
        return 1;
    }
    else {
        if (x < 0) {
            return -1;
        }
        else {
            return 0;
        }
    }
}

void ClassificarNumero(int n) {
    int x;
    
    for (int i=0; i < n; i++) {
        scanf("%d", &x);
        if (x == 0) {
            printf("NULL\n");
        } 
        else {
            if (EhPar(x)) {
                if (EhPositivo(x) == 1) {
                    printf("EVEN POSITIVE\n");
                } 
                else {
                    printf("EVEN NEGATIVE\n");
                }
            } 
            else {
                if (EhPositivo(x) == 1) {
                    printf("ODD POSITIVE\n");
                } 
                else {
                    printf("ODD NEGATIVE\n");
                }
            }
        }
    }
}

int main() {
    int num;
    
    LerValor(&num);
    ClassificarNumero(num);
    
    return 0;
}