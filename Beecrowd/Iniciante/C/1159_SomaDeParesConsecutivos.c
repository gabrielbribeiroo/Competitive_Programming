/*
O programa deve ler um valor inteiro X indefinidas vezes. 
O programa irá parar quando o valor de X for igual a 0.
Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. 
Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a soma de 12+14+16+18+20.
*/

#include <stdio.h>

void LerValor(int *n) {
    scanf("%d", n);
}

void SomarParesConsecutivosX(int x) {
    int soma = 0, contador = 0;

    // Loop para somar os cinco pares consecutivos, a partir de x
    while (contador < 5) {
        if (x % 2 == 0) {  // Verifica se x é par
            soma += x;
            contador++;  // Incrementa o contador de pares somados
        }
        x++;  // Avança para o próximo número
    }

    printf("%d\n", soma);  // Imprime a soma dos cinco pares
}

int main() {
    int num;
    
    do {
        LerValor(&num); // Lê o valor de x
        if (num != 0) {  // Verifica se o valor é diferente de zero antes de chamar a função
            SomarParesConsecutivosX(num);  // Chama a função para somar os pares consecutivos
        }
    } while (num != 0); // Continua, enquanto x for diferente de 0
 
    return 0;
}


