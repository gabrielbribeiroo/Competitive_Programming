/*
Após a morte de Ares, o último godofor, os outros deuses decidiram fazer um concurso para decidir quem seria o novo godofor. 
Porém, seres de diversos universos tinham interesse na vaga. 
Por haver tantos candidatos, os deuses estão com muita dificuldade para selecionar um deles, então eles decidiram recorrer a você, o deus da programação.
Eles querem que você desenvolva um programa que decida quem será o novo godofor, com base nos critérios definidos pelos deuses.
Os candidatos serão avaliados com base em três atributos:
    - nível de poder do candidato;
    - quantos deuses o candidato já matou;
    - quantas vezes o candidato já morreu. 
O godofor deve ser:
    - o candidato mais poderoso;
    - caso ocorra empate, deverá ser o candidato que mais matou outros deuses;
    - caso ocorra empate novamente, o escolhido será o candidato que menos morreu;
    - se mesmo assim o empate persistir, o godofor será o candidato com o menor nome lexicograficamente.
*/ 

#include <stdio.h>
#include <string.h>

#define MAX 101 // Define uma constante de valor 101 para a máxima quantidade de caracteres do nome

typedef struct {
    char nome[MAX];
    int poder, qnt_mortos, qnt_mortes; 
}tDeus;

void LerQuantidadeCandidatos(int *n) {
    scanf("%d", n);
}

void LerCandidatos(tDeus c[], int n) {
    for (int i=0; i<n; i++) {
        scanf("%s %d %d %d", &c[i].nome, &c[i].poder, &c[i].qnt_mortos, &c[i].qnt_mortes);
    }
}

void IdentificarVencedor(tDeus c[], int n) {
    tDeus vencedor = c[0]; // Inicializa o vencedor como o primeiro candidato
    for (int i=1; i<n; i++) {
        if ((c[i].poder>vencedor.poder) || (c[i].poder==vencedor.poder && c[i].qnt_mortos>vencedor.qnt_mortos) || (c[i].poder==vencedor.poder && c[i].qnt_mortos==vencedor.qnt_mortos && c[i].qnt_mortes<vencedor.qnt_mortes) || (c[i].poder==vencedor.poder && c[i].qnt_mortos==vencedor.qnt_mortos && c[i].qnt_mortes==vencedor.qnt_mortes && strcmp(c[i].nome, vencedor.nome)<0)) {
            vencedor = c[i]; // Após verificar se tem algum candidato superior ao atual vencedor, ele será o novo cotado para vencedor  
        }
    }
    
    printf("%s\n", vencedor.nome); // Mostra o nome do candidato vencedor
}


int main() {
    int qnt_candidatos;
    
    LerQuantidadeCandidatos(&qnt_candidatos);
    
    tDeus candidatos[qnt_candidatos]; // Vetor candidatos do tipo tDeus(struct)
    
    // Chamada de funções
    LerCandidatos(candidatos, qnt_candidatos);
    IdentificarVencedor(candidatos, qnt_candidatos);
    
    return 0;
}