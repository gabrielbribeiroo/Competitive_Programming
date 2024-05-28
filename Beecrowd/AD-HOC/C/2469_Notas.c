/*
O professor Arquimedes precisa da sua ajuda para descobrir qual é a nota mais frequente entre as notas que os alunos dele tiraram na última prova. 
A turma tem N alunos e seu programa deve imprimir a nota que aparece mais vezes na lista de N notas. 
Se houver mais de uma nota mais frequente, você deve imprimir a maior delas! 
Por exemplo, se a turma tiver N = 10 alunos e as notas forem [20, 25, 85, 40, 25, 90, 25, 40, 55, 40], as notas mais frequentes são 25 e 40, ocorrendo três vezes cada. 
Seu programa, então, deve imprimir 40.
*/

#include <stdio.h>
 
int main() {
    int qnt_notas;
    scanf("%d", &qnt_notas);
    
    int notas[qnt_notas];
    int frequencia[101] = {0}; // Array para contar frequências inicializadas com 0 (notas de 0 a 100)
    
    for (int i=0; i<qnt_notas; i++) {
        scanf("%d", &notas[i]); // Leitura das notas dos alunos
        frequencia[notas[i]]++; // Incrementa a frequência da nota correspondente
    }
    
    int nota_frequente = -1, max_frequencia = 0;  // Variáveis para armazenar a nota mais frequente e a frequência máxima
    
    for (int i=0; i<=100; i++) {
        if (frequencia[i] > max_frequencia || (frequencia[i] == max_frequencia && i > nota_frequente)) {
            max_frequencia = frequencia[i]; // Atualiza a frequência máxima
            nota_frequente = i; // Atualiza a nota mais frequente
        }
    }
    
    printf("%d\n", nota_frequente); // Imprime a nota mais frequente
    
    return 0;
}