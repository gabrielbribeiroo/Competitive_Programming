/*
Roumes era um aluno acima da média. 
Nas provas de matemática, ele sempre tirava nota máxima, acertando todas as contas, mas o segredo dele não estava em fazer contas corretamente. 
Ele interpretava o que via no ambiente a sua volta e conseguia deduzir as respostas para as questões. 
Você também pode ser alguém especial, igual a Roumes.
*/

#include <stdio.h>
 
int main() {
    int perguntas;
    scanf("%d", &perguntas); // Leitura da quantidade de perguntas
    
    int respostas[perguntas]; // Array para armazenar as respostas
    for (int i=0; i<perguntas; i++) {
        scanf("%d", &respostas[i]); // Leitura do que se viu para chegar na resposta
        printf("resposta %d: %d\n", i+1, respostas[i]); // Mostra a resposta de cada pergunta
    }
    
    return 0;
}