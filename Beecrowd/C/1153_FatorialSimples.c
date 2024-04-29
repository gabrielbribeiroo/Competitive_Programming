/*
Ler um valor N. 
Calcular e escrever seu respectivo fatorial. 
Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.
*/

#include <stdio.h>

void LerValor(int *n) {
    scanf("%d", n);
}

int CalcularFatorial(int num) {
    int fatorial;
    
    if ((num == 0) || (num == 1)) {
        fatorial = 1;
    }
    else {
        fatorial = num * CalcularFatorial(num-1);
    }
    
    return fatorial;
}

void MostrarFatorial(int num) {
    printf("%d\n", num);    
}

int main() {
    int num, fatorial;
    
    LerValor(&num);
    fatorial = CalcularFatorial(num);
    MostrarFatorial(fatorial);

    return 0;
}