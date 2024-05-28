/*
Certa vez, numa aula, a professora passou um filme para os alunos assistirem. 
Durante este filme, ela passou uma lista de presença em sua sala para verificar a presença dos alunos, onde cada aluno deveria inserir apenas seu número de registro. 
Alguns alunos contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram os números de registro de seus amigos fujões.
O problema é que muitos alunos são amigos de alunos que fogem da aula e alguns números de registro acabaram sendo repetidamente inseridos na lista de presença. 
Além de tudo, alguns dos alunos que se esperava que não estivessem na aula de fato estavam!
A professora, ao notar que a lista de presença continha alguns números repetidos, ficou sem entender, mas decidiu dar um voto de confiança e dar presença a todos os alunos cujos números de registro estavam na lista. 
Como são muitos alunos na sala e muitos números com repetição, ela pediu a sua ajuda para determinar o total de alunos que receberam presença na aula.
*/

#include <stdio.h>

#define MAX_SIZE 1000001
 
int main() {
    int qnt_registros;
    
    scanf("%d", &qnt_registros);
    
    int presenca[MAX_SIZE] = {0}; // Inicializa um array de contagem de presença com zeros
    int cont = 0; // Variável para contar o número de alunos únicos
    
    for (int i=0; i<qnt_registros; i++) {
        int aluno;
        scanf("%d", &aluno);
        // Verifica se o número de registro já foi registrado
        if (presenca[aluno] == 0) {
            presenca[aluno] = 1; // Marca o aluno como presente
            cont++; // Incrementa o contador de alunos únicos
        }
    }
    
    printf("%d\n", cont);
    
    return 0;
}