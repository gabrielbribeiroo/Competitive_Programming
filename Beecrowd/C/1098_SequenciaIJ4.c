/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=0 J=1
I=0 J=2
I=0 J=3
I=0.2 J=1.2
I=0.2 J=2.2
I=0.2 J=3.2
.....
I=2 J=?
I=2 J=?
I=2 J=?
*/

#include <stdio.h>
#include <math.h>

// Função para verificar se um número é aproximadamente igual a um número inteiro
int EhInteiro(double num) {
    return fabs(num - round(num)) < 0.0001; // Ajuste este valor conforme necessário
}

void MostrarSequencia() {
    double i = 0.0, j = 1;
    int cont = 0, cont_tot = 0;
    
    do {
        if (EhInteiro(i)) {
            printf("I=%.0f J=%.0f\n", i, j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i, j);
        }
        cont++;
        cont_tot++;
        j++;
        
        if (cont == 3) {
            cont = 0;
            j-= 2.8;
            i += 0.2;
        }
    }while(cont_tot != 33);
}

int main() {
    MostrarSequencia();
    return 0;
}