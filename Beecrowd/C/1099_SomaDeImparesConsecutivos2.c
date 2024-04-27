/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de dois inteiros X e Y. 
Você deve apresentar a soma de todos os ímpares existentes entre X e Y.
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
        
        if (*x > *y) {
            int aux = *x;
            *x = *y;
            *y = aux;
        }
        
        for (int j=*x+1; j<*y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }
        printf("%d\n", soma);
    }
}

int main() {
    int num1, num2, qnt_teste;
    
    LerQuantidadeTeste(&qnt_teste);
    SomarImparesXY(qnt_teste, &num1, &num2);
 
    return 0;
}
