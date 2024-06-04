/*
Prog e Cackto começaram recentemente a jogar um jogo de RPG chamado Fortaleza. 
Neste, para o jogador evoluir de nível o mesmo precisa derrotar monstros, nos quais dá um valor de experiência (XP) para o jogador.
A produtora do jogo, Jogos Extremos, anunciou que na próxima semana irá realizar o primeiro evento XP no qual aumentará a experiência dos monstros em X vezes. 
Como Prog e Cackto estão em um nível muito alto no qual os monstros tem um valor muito alto de pontos de experiência, eles estão tendo dificuldades de calcular a quantidade de pontos de experiência que os monstros terão durante o evento. 
Você pode ajudá-los?
*/
#include <stdio.h>
 
int main() {
    int aumento, valor;
    
    while (1) {
        scanf("%d %d", &aumento, &valor); 
        
        if (aumento==0 && valor==0) {
            break; // Condição de parada
        }    
        
        long long exp_monstro = (long long) aumento * valor; // Calcula a nova experiência do monstro
    
        printf("%lld\n", exp_monstro); // Mostra o novo EXP do monstro
    }
    
    return 0;
}