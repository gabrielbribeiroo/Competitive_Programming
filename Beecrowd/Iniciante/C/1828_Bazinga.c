/*
No oitavo episodio da segunda temporada do seriado The Big Bang Theory, The Lizard-Spock Expansion, Sheldon e Raj discutem qual dos dois é o melhor: o filme Saturn 3 ou a série Deep Space 9. 
A sugestão de Raj para a resolução do impasse é uma disputa de Pedra-Papel-Tesoura. 
Contudo, Sheldon argumenta que, se as partes envolvidas se conhecem, entre 75% e 80% das disputas de Pedra-Papel-Tesoura terminam empatadas, e então sugere o Pedra-Papel-Tesoura-Lagarto-Spock.
As regras do jogo proposto são:
a tesoura corta o papel;
o papel embrulha a pedra;
a pedra esmaga o lagarto;
o lagarto envenena Spock;
Spock destrói a tesoura;
a tesoura decapita o lagarto;
o lagarto come o papel;
o papel contesta Spock;
Spock vaporiza a pedra;
a pedra quebra a tesoura.
Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. 
Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!".
Caso Raj vencesse, ele concluiria que "Raj trapaceou!".
Caso o resultado fosse empate, ele exigiria nova partida: "De novo!". 
Conhecidas as personagens do jogo escolhido por ambos, faça um programa que imprima a provável reação de Sheldon.
*/

#include <stdio.h>
#include <string.h>

const char* DeterminarVencedor(const char* sheldon, const char* raj) {
    // Verificação das escolhas
    if (strcmp(sheldon, raj) == 0) {
        return "De novo!"; // Empate
    }
    
    if ((strcmp(sheldon, "tesoura") == 0 && (strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)) ||
        (strcmp(sheldon, "papel") == 0 && (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)) ||
        (strcmp(sheldon, "pedra") == 0 && (strcmp(raj, "lagarto") == 0 || strcmp(raj, "tesoura") == 0)) ||
        (strcmp(sheldon, "lagarto") == 0 && (strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0)) ||
        (strcmp(sheldon, "Spock") == 0 && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0))) {
        return "Bazinga!"; // Vitória de Sheldon
    } 
    else {
        return "Raj trapaceou!"; // Vitória de Raj
    }
}

 
int main() {
    int qnt_teste;
    scanf("%d", &qnt_teste);
    
    char sheldon[10], raj[10];
    
    for (int i=0; i<qnt_teste; i++) {
        scanf("%s %s", sheldon, raj); // Leitura das escolhas de Sheldon e Raj
        const char* resultado = DeterminarVencedor(sheldon, raj); // Chamada da função 
        printf("Caso #%d: %s\n", i+1, resultado); // Mostra o resultado de cada caso de teste
    }
    
    return 0;
}