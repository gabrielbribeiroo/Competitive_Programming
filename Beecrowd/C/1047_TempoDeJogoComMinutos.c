/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. 
A seguir, calcule a duração do jogo.
*Obs: O jogo tem duração mínima de 1 minuto e duração máxima de 24 horas.
*/

#include <stdio.h>

void LerValores(int *n1, int *n2, int *n3, int *n4) {
    scanf("%d %d %d %d", n1, n2, n3, n4);
}

void CalcularDuracao(int *n1, int *n2, int *n3, int *n4, int *h, int *m) {
    int tot_min_ini = (*n1) * 60 + (*n2);
    int tot_min_fin = (*n3) * 60 + (*n4);
    int dur_tot_min = tot_min_fin - tot_min_ini;
    
    if (dur_tot_min <= 0) {
        dur_tot_min += 24 * 60;
    }
    
    *h = dur_tot_min / 60;
    *m = dur_tot_min % 60;
}

void MostrarDuracao(int *h, int *m) {
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", *h, *m);
}
 
int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final, duracao_horas, duracao_minutos;
    
    LerValores(&hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    CalcularDuracao(&hora_inicial, &minuto_inicial, &hora_final, &minuto_final, &duracao_horas, &duracao_minutos);
    MostrarDuracao(&duracao_horas, &duracao_minutos);
    
    return 0;
}