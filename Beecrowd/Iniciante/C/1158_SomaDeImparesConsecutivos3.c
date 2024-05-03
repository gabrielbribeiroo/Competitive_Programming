/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. 
Você deve apresentar a soma de Y ímpares consecutivos a partir de X, inclusive o próprio X, se ele for ímpar. 
Por exemplo:
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13
*/

#include <stdio.h>

void LerQuantidadeTeste(int *n) {
    scanf("%d", n);
}

void SomarImparesXY(int n, int *x, int *y) {
    int soma;
    
    for (int i=0; i<n; i++) {
        scanf("%d %d", x, y);
        soma = 0;
        
        int contador = 0;
        
        do {
            if (*x % 2 != 0) { // Verifica se x é ímpar para somar
                soma += *x;
                contador++;
            }
            (*x)++; // Incrementa x independentemente do resultado do if
        }while(contador < *y);
        
        printf("%d\n", soma);
    }
}

int main() {
    int num1, num2, qnt_teste;
    
    LerQuantidadeTeste(&qnt_teste);
    SomarImparesXY(qnt_teste, &num1, &num2);
 
    return 0;
}
