/*
Leia a hora inicial e a hora final de um jogo. 
A seguir, calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
*/

#include <stdio.h>

void LerValores(int *n1, int *n2) {
    scanf("%d %d", n1, n2);
}

void CalcularDuracao(int *n1, int *n2, int *t) {
    if ((*n1) < (*n2)) {
        *t = (*n2) - (*n1);
    }
    else {
        *t = 24 - (*n1) + (*n2);
    }
}

void MostrarDuracao(int *t) {
    printf("O JOGO DUROU %d HORA(S)\n", *t);
}
 
int main() {
    int hora_inicial, hora_final, duracao;
    
    LerValores(&hora_inicial, &hora_final);
    CalcularDuracao(&hora_inicial, &hora_final, &duracao);
    MostrarDuracao(&duracao);
    
    return 0;
}