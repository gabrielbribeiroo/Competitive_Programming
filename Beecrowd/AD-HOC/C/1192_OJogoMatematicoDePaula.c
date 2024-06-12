/*
Paula simplesmente adora matemática. 
Seu maior passatempo é ficar inventando jogos ou atividades que a envolvam para brincar com seus amiguinhos. 
Obviamente, nem todos eles não são tão apaixonados assim por matemática e têm muita dificuldade para resolver as brincadeiras propostas por ela. 
Agora Paula inventou um pequeno passatempo que envolve 3 caracteres: um dígito numérico, uma letra e outro dígito numérico.
Se a letra for maiúscula, deve-se subtrair o primeiro dígito do segundo. 
Se a letra for minúscula, deve-se somar ambos os dígitos e se os DÍGITOS forem iguais, deve-se desconsiderar a letra e mostrar o produto entre os dois dígitos. 
Ela pediu para seu amigo Marcelo, que é bom em programação, para criar um programa para que encontre a solução para cada uma das sequências que Paula lhe apresentar.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consumir a quebra de linha após o número de casos de teste

    char linha[5]; // Buffer para ler cada linha de entrada
    for (int i = 0; i < n; i++) {
        fgets(linha, sizeof(linha), stdin);
        
        int primeiro_digito = linha[0] - '0';
        char letra = linha[1];
        int segundo_digito = linha[2] - '0';
        
        int resultado;

        if (primeiro_digito == segundo_digito) {
            resultado = primeiro_digito * segundo_digito;
        } else if (isupper(letra)) {
            resultado = segundo_digito - primeiro_digito;
        } else {
            resultado = primeiro_digito + segundo_digito;
        }

        printf("%d\n", resultado);
    }

    return 0;
}
