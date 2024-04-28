/*
A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. 
Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. 
Logo após, escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. 
Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
    - Quantos GRENAIS fizeram parte da estatística;
    - O número de vitórias do Inter;
    - O número de vitórias do Grêmio;
    - O número de empates;
    - Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).
*/

#include <stdio.h>

void LerGols(int *gols_inter, int *gols_gremio) {
    scanf("%d %d", gols_inter, gols_gremio);
}

void AtualizarEstatisticas(int gols_inter, int gols_gremio, int *grenais, int *vitorias_inter, int *vitorias_gremio, int *empates) {
    (*grenais)++;
    if (gols_inter > gols_gremio) {
        (*vitorias_inter)++;
    }
    else {
        if (gols_inter < gols_gremio) {
            (*vitorias_gremio)++;
        }
        else {
            (*empates)++;
        }
    }
}

int LoopingGrenais() {
    int opcao;
    
    do {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
    } while ((opcao != 1) && (opcao != 2));
    
    return opcao;
}

void MostrarEstatisticas(int grenais, int vitorias_inter, int vitorias_gremio, int empates) {
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitorias_inter);
    printf("Gremio:%d\n", vitorias_gremio);
    printf("Empates:%d\n", empates);
    
    if (vitorias_inter > vitorias_gremio) {
        printf("Inter venceu mais\n");
    }
    else {
        if (vitorias_inter < vitorias_gremio) {
            printf("Gremio venceu mais\n");
        }
        else {
            printf("Nao houve vencedor\n");
        }
    }
}
 
int main() {
    int grenais = 0, vitorias_inter = 0, vitorias_gremio = 0, empates = 0;
    int continuar = 1;
    
    while (continuar == 1) {
        int gols_inter, gols_gremio;
        LerGols(&gols_inter, &gols_gremio);
        AtualizarEstatisticas(gols_inter,gols_gremio, &grenais, &vitorias_inter, &vitorias_gremio, &empates);
        continuar = LoopingGrenais();
    }
    
    MostrarEstatisticas(grenais, vitorias_inter, vitorias_gremio, empates);
    
    return 0;
}