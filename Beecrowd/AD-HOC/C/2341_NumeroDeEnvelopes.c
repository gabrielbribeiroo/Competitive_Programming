/*
Aldo é um garoto muito esperto que adora promoções e sorteios. 
Como já participou de muitas promoções da forma “para participar, envie n rótulos de produtos ...”, Aldo tem o costume de guardar o rótulo de todos os produtos que compra. 
Dessa forma, sempre que uma empresa faz uma promoção ele já tem um monte de rótulos para mandar.
A SBC (Super Balas e Caramelos) está fazendo uma nova promoção, e, como era de se esperar, Aldo quer participar. 
Para participar da promoção, é preciso enviar um envelope contendo um rótulo de cada tipo de bala que a SBC produz. 
Por exemplo, se a SBC produz 3 tipos de balas, A, B, C, e uma pessoa tem 3 rótulos de A, 3 de B e 2 de C, ela pode enviar no máximo 2 envelopes, já que falta um rótulo de C para compor o terceiro envelope. 
Não há limite para o número de envelopes que uma pessoa pode enviar.
Balas são a segunda coisa de que Aldo mais gosta (a primeira, como você sabe, são promoções). 
Por causa disso, a quantidade de rótulos de balas que ele tem é muito grande, e ele não está conseguindo determinar a quantidade máxima de envelopes que ele pode enviar.
Como você é o melhor amigo de Aldo, ele pediu sua ajuda para fazer o cálculo, de modo que ele compre o número exato de envelopes.
Você deve escrever um programa que, a partir da lista de rótulos de Aldo, calcula o número máximo de envelopes válidos que ele pode enviar.
*/

#include <stdio.h>
 
void LerQuantidades(int *q_rot, int *q_tip) {
    scanf("%d %d", q_rot, q_tip); // Lê a quantidade de rótulos e de tipos 
}

void VetorRepeticoes(int c[], int q_tip) {
    for (int i=0; i<q_tip; i++) {
        c[i] = 0; // Inicializa o vetor de contar tipos à 0
    }
}

void LerTipos(int c[], int q_rot) {
    int tipo;
    for (int i=0; i<q_rot; i++) {
        scanf("%d", &tipo);
        c[tipo-1]++; // Aumenta uma unidade na posição de cada tipo
    }
}

int MenorRotulo(int c[], int q_tip) {
    int menor = 1000001; // Inicializa com o primeiro maior inteiro que não será lido (valor alto)
    
    for (int i=0; i<q_tip; i++) {
        if (c[i] < menor) {
            menor = c[i]; // Encontra o valor de menor número de rótulos de um tipo (será a quantidade de envelopes)
        }    
    }
    
    // O número máximo de envelopes que Aldo pode enviar é a quantidade menor de rótulos de um tipo
    return menor;
}

void MostrarMenorRotulo(int c[], int q_tip) {
    printf("%d\n", MenorRotulo(c, q_tip)); // Mostra a quantidade de envelopes possíveis para enviar
}
 
int main() {
    int qnt_rotulos, qnt_tipos;
    
    LerQuantidades(&qnt_rotulos, &qnt_tipos);
    
    int cont_tipos[qnt_tipos]; // Vetor que armazena a quantidade de repetições (rótulos) de cada tipo
    
    // Chamadas das funções
    VetorRepeticoes(cont_tipos, qnt_tipos);
    LerTipos(cont_tipos, qnt_rotulos);
    MostrarMenorRotulo(cont_tipos, qnt_tipos);
    
    return 0;
}