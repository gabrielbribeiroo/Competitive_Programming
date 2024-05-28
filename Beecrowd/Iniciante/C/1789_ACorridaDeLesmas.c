/*
A corrida de lesmas é um esporte que cresceu muito nos últimos anos, fazendo com que várias pessoas dediquem suas vidas tentando capturar lesmas velozes, e treina-las para faturar milhões em corridas pelo mundo. 
Porém, a tarefa de capturar lesmas velozes não é uma tarefa muito fácil, pois praticamente todas as lesmas são muito lentas. 
Cada lesma é classificada em um nível, dependendo de sua velocidade:

Nível 1: Se a velocidade é menor que 10 cm/h.
Nível 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h.
Nível 3: Se a velocidade é maior ou igual a 20 cm/h.

Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um grupo de lesmas.
*/

#include <stdio.h>
 
int NivelLesmaVeloz(int q) {
    int max_speed = 0; // Maior velocidade inicializada com 0
    
    for (int i=0; i<q; i++) {
        int speed;
        scanf("%d", &speed); // Lê todas as velocidades
        if (speed > max_speed) {
            max_speed = speed; // Atualiza o valor da maior velocidade
        }
    }
    
    // Verifica e retorna o nível da velocidade 
    if (max_speed < 10) {
        return 1;
    } 
    else {
        if (max_speed < 20) {
            return 2;
        }
        else {
            return 3;
        }
    }
}

int main() {
    int qnt_test;
    while (scanf("%d", &qnt_test) != EOF) {
        printf("%d\n", NivelLesmaVeloz(qnt_test)); // Mostra o nível da maior velocidade
    }
    return 0;
}