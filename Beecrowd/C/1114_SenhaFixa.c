/*
Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida".
Quando a senha for informada corretamente, deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. 
Considere que a senha correta é o valor 2002. 
*/

#include <stdio.h>

#define SENHA 2002

void LerSenha(int *n) {
    scanf("%d", n);    
} 

void VerificarSenha(int *n) {
    while (*n != SENHA) {
        printf("Senha Invalida\n");
        scanf("%d", n);
    }
    printf("Acesso Permitido\n");
}

int main() {
    int num;
    
    LerSenha(&num);
    VerificarSenha(&num);
    
    return 0;
}