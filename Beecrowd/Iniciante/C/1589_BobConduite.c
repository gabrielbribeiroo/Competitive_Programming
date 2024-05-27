/*
Você tem em mãos dois cabos circulares de energia. 
O primeiro cabo tem raio R1 e o segundo raio R2. 
Você precisa comprar um conduite circular, de maneira a passar os dois cabos por dentro dele.
Qual o menor raio do conduite que você deve comprar? 
Em outras palavras, dado dois círculos, qual o raio do menor círculo que possa englobar ambos os dois?
*/

#include <stdio.h>

void VerificarConduite(int t) {
    int cont = 0, r1, r2;
    
    while (cont < t) {
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2); // Mostra o menor comprimento possível para o raio do conduíte
        cont++;
    }
}

int main() {
    int qnt_teste;
    
    scanf("%d", &qnt_teste); // Lê o número de casos de teste
    VerificarConduite(qnt_teste); // Chamada da função
    
    return 0;
}