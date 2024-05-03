/*
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. 
Para cada ponto, escrever o quadrante a que ele pertence. 
O algoritmo será encerrado quando, pelo menos, uma de duas coordenadas for NULA (nesta situação, sem escrever mensagem alguma).
*/

#include <stdio.h>
 
void LerCoordenadas(int *x, int *y) {
    scanf("%d %d", x, y);
}

void VerificarQuadrantes(int *x, int *y) {
    while ((*x != 0) && (*y != 0)) {
        if (*x > 0) {
            if (*y > 0) {
                printf("primeiro\n");
            }
            else {
                printf("quarto\n");
            }
        }
        else {
            if (*y > 0) {
                printf("segundo\n");
            }
            else {
                printf("terceiro\n");
            }
        }
        scanf("%d %d", x, y);
    }
}

int main() {
    int x, y;
    
    LerCoordenadas(&x, &y);
    VerificarQuadrantes(&x, &y);
    
    return 0;
}