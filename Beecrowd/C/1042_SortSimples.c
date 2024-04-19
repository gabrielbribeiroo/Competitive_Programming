/*
Leia 3 valores inteiros e ordene-os em ordem crescente. 
No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.
*/

void LerValores(int *n1, int *n2, int *n3) {
    scanf("%d %d %d", n1, n2, n3);
}

void OrdenarValores(int *n1, int *n2, int *n3, int *p, int *s, int *t) {
    if ((*n1 <= *n2) && (*n1 <= *n3)) {
        *p = *n1;
        if (*n2 <= *n3) {
            *s = *n2;
            *t = *n3;
        } else {
            *s = *n3;
            *t = *n2;
        }
    }
    else {
        if ((*n2 <= *n1) && (*n2 <= *n3)) {
            *p = *n2;
            if ((*n1 <= *n3)) {
                *s = *n1;
                *t = *n3;   
            }
            else {
                *s = *n3;
                *t = *n1; 
            }
        }
        else {
            *p = *n3;
            if (*n1 <= *n2) {
                *s = *n1;
                *t = *n2;
            }
            else {
                *s = *n2;
                *t = *n1;
            }
        }
    }
}

void MostrarOrdenacao(int *p, int *s, int *t) {
    printf("%d\n%d\n%d\n", *p, *s, *t);
}

void MostrarValores(int *n1, int *n2, int *n3) {
    printf("\n%d\n%d\n%d\n", *n1, *n2, *n3);
}

#include <stdio.h>

int main() {
    int num1, num2, num3, primeiro, segundo, terceiro;
    
    LerValores(&num1, &num2, &num3);
    OrdenarValores(&num1, &num2, &num3, &primeiro, &segundo, &terceiro);
    MostrarOrdenacao(&primeiro, &segundo, &terceiro);
    MostrarValores(&num1, &num2, &num3);
    
    return 0;
}