/*
Uma brincadeira que crianças adoram é se comunicar na língua do P, acrescentando pê antes de cada sílaba, como uma forma de código para dificultar que outras pessoas entendam a conversa (pê-va pê-mos pê-no pê-ci pê-ne pê-ma?).
Jacy e Kátia adaptaram a língua do P para mensagens eletrônicas, acrescentando a letra P minúscula ‘p’ antes de cada letra das palavras de uma mensagem. 
Sua tarefa é escrever um programa que decodifique uma mensagem escrita na língua do P eletrônica de Jacy e Kátia.
Exemplos de Entrada	                Exemplos de Saída
pUpm pfpiplpmpe plpepgpapl          Um filme legal
pA pppapppa pdpo pPpapppa           A papa do Papa
*/

#include <stdio.h>
#include <string.h>

void DecodificarMensagem(char *codificada, char *decodificada) {
    int j = 0;
    
    for (int i=0; i<strlen(codificada); i++) {
        if (codificada[i] == 'p' && i+1<strlen(codificada)) {
            i++;
            decodificada[j++] = codificada[i]; // Ignora o 'p' e pegar o próximo caractere
        }
        else {
            decodificada[j++] = codificada[i]; // Copia o caractere não 'p'
        }
    }
    
    decodificada[j] = '\0'; // Adiciona o caractere nulo no final da string decodificada
}
 
int main() {
    char mensagem_codificada[1001];
    char mensagem_decodificada[1001];

    fgets(mensagem_codificada, 1001, stdin); // Leitura da entrada
    mensagem_codificada[strcspn(mensagem_codificada, "\n")] = '\0'; // Remover o '\n' do final da string se existir
    DecodificarMensagem(mensagem_codificada, mensagem_decodificada); // Chamada da função
    printf("%s\n", mensagem_decodificada); // Imprime a mensagem decodificada
    
    return 0;
}