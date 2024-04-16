/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica.
Informe-o expresso no formato horas:minutos:segundos.
*/

#include <stdio.h>
 
int main() {
    int horas, minutos, segundos, segundos_sobras;
    
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    segundos_sobras = segundos % 3600;
    minutos = segundos_sobras / 60;
    segundos_sobras = segundos_sobras % 60;
    
    printf("%d:%d:%d\n", horas, minutos, segundos_sobras);

    return 0;
}