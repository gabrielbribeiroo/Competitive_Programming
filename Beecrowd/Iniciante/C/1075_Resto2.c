/*
Leia um valor inteiro N.
Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual
a 2.
*/

#include <stdio.h>

void LerValor(int *n) { 
    scanf("%d", n);
}

void MostrarNumerosResto(int n) {
    for (int i = 2; i < 10000; i++) {
        if (i % n == 2) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num;

    LerValor(&num);
    MostrarNumerosResto(num);

    return 0;
}