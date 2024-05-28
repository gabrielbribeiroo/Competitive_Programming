/*
Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol, juntamente com outros times. 
Cada vitória conta três pontos, cada empate um ponto. 
Fica melhor classificado no campeonato um time que tenha mais pontos. 
Em caso de empate no número de pontos, fica melhor classificado o time que tiver maior saldo de gols. 
Se o número de pontos e o saldo de gols forem os mesmos para os dois times, então os dois times estão empatados no campeonato.
Dados os números de vitórias e empates, e os saldos de gols dos dois times, sua tarefa é determinar qual dos dois está melhor classificado, ou se eles estão empatados no campeonato.
*/

#include <stdio.h>
 
int main() {
    int cor_vit, cor_emp, cor_saldo, fla_vit, fla_emp, fla_saldo;
    
    scanf("%d %d %d %d %d %d", &cor_vit, &cor_emp, &cor_saldo, &fla_vit, &fla_emp, &fla_saldo);

    // Calcula os pontos de cada equipe
    int cor_pts = cor_vit*3 + cor_emp;
    int fla_pts = fla_vit*3 + fla_emp;
    
    // Verifica os critérios de desempate
    if (cor_pts > fla_pts) {
        printf("C\n");
    }
    else {
        if (cor_pts == fla_pts) {
            if (cor_saldo > fla_saldo) {
                printf("C\n");
            }
            else {
                if (cor_saldo == fla_saldo) {
                    printf("=\n");
                }
                else {
                    printf("F\n");
                }
            }
        }
        else {
            printf("F\n");
        }
    }
    
    return 0;
}