/*
Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.
*/

#include <stdio.h>

void CalcularDuracao(int dia_i, int hora_i, int min_i, int sec_i, int dia_f, int hora_f, int min_f, int sec_f, int *dia_d, int *hora_d, int *min_d, int *sec_d) {
    int seg_i, seg_f, seg_d;

    seg_i = (dia_i*86400) + (hora_i*3600) + (min_i*60) + sec_i;
    seg_f = (dia_f*86400) + (hora_f*3600) + (min_f*60) + sec_f;

    seg_d = seg_f - seg_i;

    while(seg_d >= 86400){
        seg_d -= 86400;
        (*dia_d)++;
    }
    while(seg_d >= 3600){
        seg_d -= 3600;
        (*hora_d)++;
    }
    while(seg_d >= 60){
        seg_d -= 60;
        (*min_d) ++;
    }
    while(seg_d >= 1){
        seg_d -= 1;
        (*sec_d)++;
    }
}

void MostrarDuracao(int *dia_dur, int *hora_dur, int *min_dur, int *sec_dur) {
    printf("%d dia(s)\n", *dia_dur);
    printf("%d hora(s)\n", *hora_dur);
    printf("%d minuto(s)\n", *min_dur);
    printf("%d segundo(s)\n", *sec_dur);
}

int main() {
    int dia_ini, hora_ini, min_ini, sec_ini;
    int dia_fim, hora_fim, min_fim, sec_fim;
    int dia_dur = 0, hora_dur = 0, min_dur = 0, sec_dur = 0;
    
    char inicio[5], fim[5], separacao[4];

    scanf("%s", &inicio);
    scanf("%d %d %c %d %c %d %s %d %d %c %d %c %d", &dia_ini, &hora_ini, &separacao[0], &min_ini, &separacao[1], &sec_ini, &fim, &dia_fim, &hora_fim, &separacao[1], &min_fim, &separacao[2], &sec_fim);
    
    CalcularDuracao(dia_ini, hora_ini, min_ini, sec_ini, dia_fim, hora_fim, min_fim, sec_fim, &dia_dur, &hora_dur, &min_dur, &sec_dur);
    MostrarDuracao(&dia_dur, &hora_dur, &min_dur, &sec_dur);

    return 0;
}
