/*
As aulas do Prof. Jatobá estão dando o que falar. 
Os representantes do MEC vieram até a UNIME de Lauro de Freitas para saber mais detalhes sobre essa nova forma de ensinar Algoritmos. 
Além disso, eles queriam selecionar 1 aluno para participar da OBI-Tec (Olimpíada Brasileira de Informática Nível Técnica) e representar a rede Kroton na competição, pois sabem que lá estão os melhores. 
Para selecionar o melhor, eles têm disponível uma lista com o número de inscrição de cada aluno e a sua respectiva nota na disciplina. 
Sua tarefa é ajudar o pessoal do MEC a encontrar o aluno mais apto a representar a instituição e quem sabe garantir sua vaga. 
Só tem um detalhe, se a nota mais alta não for maior ou igual a 8, você deverá imprimir “Minimum note not reached”.
*/
#include <stdio.h>
 
int main() {
    int alunos;
    scanf("%d", &alunos); // Leitura da quantidade de alunos
    
    int matricula, matricula_max = -1;
    double nota, nota_max = -1.0;
    
    for (int i=0; i<alunos; i++) {
        scanf("%d %lf", &matricula, &nota); // Leitura do número de matrícula e a nota do aluno
        
        // Verifica a maior nota
        if (nota > nota_max) {
            nota_max = nota;
            matricula_max = matricula;
        }
    }
    
    if (nota_max >= 8.0) {
        printf("%d\n", matricula_max);
    }
    else {
        printf("Minimum note not reached\n");
    }
 
    return 0;
}