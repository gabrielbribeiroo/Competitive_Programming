/*
Considere as definições abaixo:
Uma palavra é uma sequência de letras consecutivas.
Um texto é um conjunto de palavras separadas pelo caractere espaço em branco.
Você foi contratado pela empresa Booble para escrever um programa que, dados uma letra e um texto, determina a porcentagem de palavras do texto que contém a letra dada.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char letter;
    char text[1001];
    
    scanf("%c", &letter); // Leitura da letra de interesse
    getchar(); // Limpa o buffer do stdin para evitar problemas na leitura do texto
    fgets(text, sizeof(text), stdin); // Leitura do texto
    text[strcspn(text, "\n")] = '\0'; // Remover o '\n' do final da string se existir
    
    int tot_words = 0, words_with_letter = 0;
    
    char *word = strtok(text, " "); // Divide o texto em palavras
    while (*word != NULL) {
        tot_words++; // Contador de palavras
        
        int found = 0;
        for (int i=0; i<strlen(word); i++) {
            // Verifica se a palavra contém a letra de interesse
            if (word[i] == letter) {
                found = 1;
                break;
            }
        }
        
        if (found) {
            words_with_letter++; // Conta as palavras que contém a letra desejada
        }
        
        word = strtok(NULL, " "); // Incrementa um espaço ao final da palavra para ir para próxima
    }
    
    
    double percent = 0.0;
    if (tot_words > 0) {
        percent = ((double) words_with_letter / tot_words) * 100.0; // Calcula a porcentagem de palavras que contêm a letra de interesse
    }
    
    printf("%.1lf\n", percent); // Imprime a porcentagem
    
    return 0;
}