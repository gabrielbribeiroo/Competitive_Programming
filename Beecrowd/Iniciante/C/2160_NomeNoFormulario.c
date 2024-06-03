/*
Preencher formulários é uma tarefa simples. 
Mas é preciso conferir se o espaço reservado para os dados é suficiente.
Sua tarefa é, dada uma linha de texto, indicar se ele cabe ou não cabe em um formulário com 80 caracteres.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    char text[501];
    fgets(text, sizeof(text), stdin); // Leitura da string
    text[strcspn(text, "\n")] = 0; // Remove o caractere de nova linha, se estiver presente
    
    // Verifica o tamanho da string
    if (strlen(text) <= 80) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}