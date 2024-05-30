/*
Com a proximidade da Copa do Mundo, o fluxo de pessoas nas filas para compra de ingressos aumentou consideravelmente. 
Como as filas estão cada vez maiores, pessoas menos pacientes tendem a desistir da compra de ingressos e acabam deixando as filas, liberando assim vaga para outras pessoas. 
Quando uma pessoa deixa a fila, todas as pessoas que estavam atrás dela dão um passo a frente, sendo assim nunca existe um espaço vago entre duas pessoas. 
A fila inicialmente contém N pessoas, cada uma com um identificador diferente. 
Joãozinho sabe o estado inicial dela e os identificadores em ordem das pessoas que deixaram a fila. 
Sabendo que após o estado inicial nenhuma pessoa entrou mais na fila, Joãozinho deseja saber o estado final da fila.
*/

#include <stdio.h>
 
int main() {
    int inicio, fim;
    
    scanf("%d", &inicio); // Leitura da quantidade inicial de pessoas na fila
    int fila[inicio];
    for (int i=0; i<inicio; i++) {
        scanf("%d", &fila[i]);  // Leitura dos identificadores das pessoas na fila inicial
    }
    
    scanf("%d", &fim); // Leitura da quantidade de pessoas que saíram da fila
    int sairam[fim];
    for (int i=0; i<fim; i++) {
        scanf("%d", &sairam[i]); // Leitura dos identificadores das pessoas que deixaram a fila
    }
    
    // Conjunto (array de flags) para os identificadores que deixaram a fila    
    // Como os identificadores estão entre 1 e 100000, o array possui tamanho 100001
    int saiu[100001] = {0}; // Inicializa os elementos do array com 0
    for (int i=0; i<fim; i++) {
        saiu[sairam[i]] = 1; // Sinaliza as pessoas que saíram da fila
    }
    
    // Cria a fila final com as pessoas que não saíram
    int primeiro = 1; // flag para controlar o espaço
    for (int i=0; i<inicio; i++) {
        // Verifica se a pessoa não saiu da fila
        if (!saiu[fila[i]]) {
            if (!primeiro) {
                printf(" ");
            }
            printf("%d", fila[i]); // Mostra as pessoas presentes na fila
            primeiro = 0;
        }
    }
    
    printf("\n");

    return 0;
}