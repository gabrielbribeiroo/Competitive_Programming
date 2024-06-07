/*
Cinco patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só quatro patinhos voltaram de lá. 
Quatro patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só três patinhos voltaram de lá. 
Três patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só dois patinhos voltaram de lá. 
Dois patinhos foram passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas só um patinho voltou de lá. 
Um patinho foi passear. 
Além das montanhas. 
Para brincar. 
A mamãe gritou: quá, quá, quá, quá. 
Mas nenhum patinho voltou de lá.
A mamãe patinha ficou tão triste naquele dia que resolveu pedir sua ajuda para procurar além das montanhas, na beira do mar, quantos patinhos não voltaram de lá.
*/

#include <stdio.h>
#include <stdint.h> // Inclui uint64_t

uint64_t CalcularPatos(uint64_t patos) {
    if (patos == 0) {
        return 0;
    }
    return patos-1;
}

int main() {
    uint64_t patos;

    while (1) {
        if (scanf("%llu", &patos) != 1) {
            break; // Se não conseguir ler, sai do loop
        }

        // Verifica se é o valor de término -1 interpretado como uint64_t
        if (patos == UINT64_MAX) { 
            break;
        }

        printf("%llu\n", CalcularPatos(patos)); // Mostra a quantidade de patos que retornaram
    }

    return 0;
}
