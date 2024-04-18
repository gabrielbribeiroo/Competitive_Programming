/*
Leia 4 valores inteiros A, B, C e D. 
A seguir, se:
    - B for maior do que C e se D for maior do que A;
    - a soma de C com D for maior que a soma de A e B;
    - C e D, ambos, forem positivos;
    - a variável A for par
Escrever a mensagem "Valores aceitos";
Senão, escrever "Valores nao aceitos".
*/

#include <stdio.h>

void LerValores(int *n1, int *n2, int *n3, int *n4) {
    scanf("%d %d %d %d", n1, n2, n3, n4);
}

void VerificaValores(int n1, int n2, int n3, int n4) {
    if ((n2>n3 && n4>n1) && (n3+n4>n1+n2) && (n3>0 && n4>0) && (n1%2==0)) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
}
int main() {
    int a, b, c, d;
    
    LerValores(&a, &b, &c, &d);
    VerificaValores(a, b, c, d);
    return 0;
}