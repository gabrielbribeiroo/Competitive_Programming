/*
Ricardo e Vicente são aficionados por figurinhas. 
Nas horas vagas, eles arrumam um jeito de jogar um “bafo” ou algum outro jogo que envolva tais figurinhas. 
Ambos também têm o hábito de trocarem as figuras repetidas com seus amigos e certo dia pensaram em uma brincadeira diferente. 
Chamaram todos os amigos e propuseram o seguinte: com as figurinhas em mãos, cada um tentava fazer uma troca com o amigo que estava mais perto seguindo a seguinte regra: 
    cada um contava quantas figurinhas tinha;
    em seguida, eles tinham que dividir as figurinhas de cada um em pilhas do mesmo tamanho, no maior tamanho que fosse possível para ambos;
    então, cada um escolhia uma das pilhas de figurinhas do amigo para receber. 
Por exemplo, se Ricardo e Vicente fossem trocar as figurinhas e tivessem respectivamente 8 e 12 figuras, ambos dividiam todas as suas figuras em pilhas de 4 figuras (Ricardo teria 2 pilhas e Vicente teria 3 pilhas) e ambos escolhiam uma pilha do amigo para receber.
*/

#include <stdio.h>
 
// Função para calcular o MDC usando o Algoritmo de Euclides
int CalcularMDC(int f1, int f2) {
    while (f2 != 0) {
        int aux = f2;
        f2 = f1 % f2;
        f1 = aux;
    }
    return f1; // MDC entre f1 e f2
}
 
int main() {
    int qnt_teste, fig1, fig2;
    
    scanf("%d", &qnt_teste);
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%d %d", &fig1, &fig2); // Leitura da quantidade de figurinhas de Ricardo e Vicente
        printf("%d\n", CalcularMDC(fig1, fig2));
    }
    
    return 0;
}