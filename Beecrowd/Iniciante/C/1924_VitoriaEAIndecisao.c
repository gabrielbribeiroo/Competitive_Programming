/*
Está para nascer alguém mais indeciso do que Vitória. 
Apesar dela saber que é uma ótima programadora, daquelas que possui projetos na área de TI publicados e diversos outros em andamento, ela não tem certeza se vai seguir na área. 
Há noites que ela diz que não quer Computação, há dias que ela diz que quer alguma Engenharia, em outros ela quer qualquer outro curso, já chegou até a pensar em algum de Humanas, que pecado!
Mas você está aqui pra ajudá-la. 
A sua tarefa é bem simples, será dado uma lista com diversos nomes de cursos de graduação e você terá que imprimir o nome do curso que Vitória deve fazer.
*/

#include <stdio.h>
 
int main() {
    int qnt_cursos;
    scanf("%d", &qnt_cursos); // Leitura do número de cursos
    
    char curso[101];
    for (int i=0; i<qnt_cursos; i++) {
        scanf("%s", &curso); // Leitura dos cursos
    }
    
    printf("Ciencia da Computacao\n"); // Imprime o curso correto
    
    return 0;
}