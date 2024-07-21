#include <stdio.h>
#include <math.h>
#include <string.h>

int BinarioParaDecimal(char *n) {
    int num = 0;
    int tam = strlen(n);

    for (int i = 0; i < tam; i++) {
        if (n[tam - i - 1] == '1') {
            num += pow(2, i);
        }
    }

    return num;
}

int main() {
    char binary1[9], binary2[9]; // Binários de 8 bits + 1 para o terminador de string

    // Lê os dois valores binários como strings
    scanf("%s %s", binary1, binary2);

    // Converte os binários para decimais
    int decimal1 = BinarioParaDecimal(binary1);
    int decimal2 = BinarioParaDecimal(binary2);

    // Soma os valores decimais
    int soma = decimal1 + decimal2;

    // Verifica se a soma é igual a 255 (11111111 em binário)
    if (soma == 255) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}
