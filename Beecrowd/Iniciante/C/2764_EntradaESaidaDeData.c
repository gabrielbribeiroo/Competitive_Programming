/*
O seu professor gostaria de fazer um programa com as seguintes características:
Leia uma data no formato DD/MM/AA;
Imprima a data no formato MM/DD/AA;
Imprima a data no formato AA/MM/DD;
Imprima a data no formato DD-MM-AA.
*/

#include <stdio.h>

int main() {
    char date[9];
    
    // Leitura da data no formato DD/MM/AA
    while (scanf("%8s", date) != EOF) {
        int dd, mm, aa;
        sscanf(date, "%2d/%2d/%2d", &dd, &mm, &aa); // Divide a data lida em dia, mês e ano
        printf("%02d/%02d/%02d\n", mm, dd, aa); // Imprime a data no formato MM/DD/AA
        printf("%02d/%02d/%02d\n", aa, mm, dd); // Imprime a data no formato AA/MM/DD
        printf("%02d-%02d-%02d\n", dd, mm, aa); // Imprime a data no formato DD-MM-AA
    }

    return 0;
}
