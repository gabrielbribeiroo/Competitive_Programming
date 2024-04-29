/*
Este programa deve ler uma variável inteira X inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). 
Para cada valor lido, imprima a sequência de 1 até X, com um espaço entre cada número e seu sucessor.
*/

#include <stdio.h>

void MostrarSequencia(int x) {
    do {
        scanf("%d", &x); // Lê o valor de X

        if (x == 0) {
            break;
        } // Verifica se X é igual a zero para sair do loop
            
        for (int i=1; i<=x; i++) {
            if (i == x) {
                printf("%d", i);
            } // Não imprime espaço após o último número
            else {
                printf("%d ", i); // Imprime espaço após cada número, exceto o último
            }
        }

        printf("\n"); // Pula para a próxima linha após imprimir a sequência para X
    } while (1); // Loop infinito, sairá apenas quando X for igual a zero
}

int main() {
    int num;
    
    MostrarSequencia(num);
 
    return 0;
}