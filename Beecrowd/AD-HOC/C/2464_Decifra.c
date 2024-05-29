/*
Dimas é um renomado investigador de roubos a antiguidades e obras de arte, que sempre é chamado para casos intrigantes que necessitam de bastante trabalho mental. 
Desta vez, o quadro que sumiu de um conhecido museu na França foi a Donalisa, do pintor Leonardo da Silva. 
Este é um caso bastante especial, visto que o ladrão deixou uma frase escrita na parede, aparentemente criptografada. 
Que desafio para Dimas! 
É que ele não tem muito conhecimento nessa área de criptografia. 
Porém, ele usou de suas excelentes observações e conseguiu perceber que a frase foi escrita através de alguma permutação inversível do alfabeto.
Uma permutação inversível do alfabeto é apenas uma troca entre suas letras, duas a duas. 
Por exemplo, todo “a” será trocado por “m” e, portanto, todo “m” será trocado por “a”. 
Dessa forma, veja que dado um texto original, se aplicarmos a permutação, teremos uma frase criptografada.
E se aplicarmos a mesma permutação novamente, teremos o texto original recuperado!
Apesar de parecer fácil, a tradução se tornou uma tarefa difícil, já que a frase é bastante longa. 
É por isso que Dimas resolveu pedir sua ajuda, um exímio programador, para traduzir a frase criptografada, recuperando o texto original, e resolver o mistério!
*/

#include <stdio.h>
#include <string.h>

void DecifrarFrase(char permutacao[], char frase[]) {
    char mapa[26]; // Array para armazenar a permutação inversa
    int i;
    
    // Construir o mapa inverso para a permutação
    for (i=0; i<26; i++) {
        mapa[permutacao[i] - 'a'] = 'a' + i;
    }
    
    // Decifrar a frase
    int tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++) {
        frase[i] = mapa[frase[i] - 'a'];
    }
}
 
int main() {
    char permutacao[27]; // Permutação de 26 letras + terminador de string
    char frase[10001];   // Frase criptografada com até 10^4 caracteres + terminador de string
    
    scanf("%s", permutacao); // Leitura da permutação
    scanf("%s", frase); // Leitura da frase criptografada

    DecifrarFrase(permutacao, frase); // Chamada da função
    
    printf("%s\n", frase); // Imprime a frase decifrada
    
    return 0;
}