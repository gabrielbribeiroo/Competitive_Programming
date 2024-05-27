/*
Depois de capturar muitos Pomekons, Dabriel e Guarte resolveram batalhar. 
A forma de duelo é simples, cada treinador coloca um Pomekon na batalha e vence quem tem o Pomekon com maior valor de golpe, que é definido da seguinte maneira:

ValorGolpe = ((Ataque + Defesa)/2) + Bonus

O Bônus será dado ao Pomekon do treinador que estiver em um level de valor par.
Neste problema, será dado a você o valor do bônus aplicado, os valores de ataque e defesa do Pomekon de Dabriel e Guarte e seus respectivos níveis.
Cabe a você informar o ganhador da batalha.
*/

#include <stdio.h>

int main() {
    int qnt_teste, bonus;
    int ataque_d, defesa_d, level_d;
    int ataque_g, defesa_g, level_g;
    
    scanf("%d", &qnt_teste); // Lê o número de casos de teste
    
    for (int i = 0; i < qnt_teste; i++) {
        scanf("%d", &bonus); // Lê o valor do bônus a ser acrescido
        
        // Lê os valores de ataque, defesa e level do Pomekon de Dabriel
        scanf("%d %d %d", &ataque_d, &defesa_d, &level_d);
        // Lê os valores de ataque, defesa e level do Pomekon de Guarte
        scanf("%d %d %d", &ataque_g, &defesa_g, &level_g);
        
        // Calcula o valor do golpe para Dabriel
        int val_dabriel = (ataque_d + defesa_d) / 2;
        if (level_d % 2 == 0) {
            val_dabriel += bonus;
        }
        
        // Calcula o valor do golpe para Guarte
        int val_guarte = (ataque_g + defesa_g) / 2;
        if (level_g % 2 == 0) {
            val_guarte += bonus;
        }
        
        // Compara os valores de golpe e determina o vencedor
        if (val_dabriel > val_guarte) {
            printf("Dabriel\n");
        } else if (val_guarte > val_dabriel) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }
    
    return 0;
}
