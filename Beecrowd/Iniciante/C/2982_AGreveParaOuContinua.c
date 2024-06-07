/*
A fim de parar a greve geral dos estudantes, o governo realizou uma reunião com a UFSC. Durante a reunião a UFSC expos todos os gastos necessários para manter o funcionamento até o final do ano e o Governo informou valores que poderia oferecer para cobrir esses gastos. A reunião não foi muito organizada, e vários valores individuais foram mencionados, de forma que ninguém sabe se os valores oferecidos são suficientes para cobrir todos os gastos da universidade.
Dada a lista de valores citados na reunião, sua tarefa será somas os gastos e as verbas oferecidas para informar os estudantes da UFSC se a greve deve parar ou não.
*/

#include <stdio.h>
 
int main() {
    int num; 
    scanf("%d", &num); // Leitura do número de valores citados na reunião
    
    int gastos=0, verbas=0;
    char tipo;
    int valor;
    
    for (int i=0; i<num; i++) {
        scanf(" %c %d", &tipo, &valor); // Leitura do tipo e do valor
        
        // Verifica o tipo digitado
        if (tipo == 'G') {
            gastos += valor;
        }
        else if (tipo == 'V') {
            verbas += valor;
        }
    }
    
    // Verifica se as verbas cobrem os gastos ou não
    if (verbas >= gastos) {
        printf("A greve vai parar.\n");
    } 
    else {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    
    return 0;
}