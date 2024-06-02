/*
Tio Patinhas era um milionário que vivia em sua mansão, e tinha três sobrinhos: Huguinho, Zezinho e Luisinho. 
Ele se confundia facilmente entre os três sobrinhos, pois eram bem parecidos, apesar de terem idades diferentes. 
Um dia, os três fizeram uma aposta com o tio: se ele acertasse quem era o sobrinho do meio, ou seja, nem o mais novo, nem o mais velho, eles dariam uma moeda de ouro para ele, e se ele errasse, teria que dar uma moeda de ouro para cada um. 
Assim, o tio pede a tua ajuda para que ele possa ganhar essa aposta.
*/

#include <stdio.h>
 
int main() {
    int hugo, ze, luis;
    scanf("%d %d %d", &hugo, &ze, &luis); // Leitura das idades dos sobrinhos
    
    // Verifica o sobrinho do meio
    if ((hugo<ze && ze<luis) || (luis<ze && ze<hugo)) {
        printf("zezinho\n");
    }   
    else {
        if ((ze<hugo && hugo<luis) || (luis<hugo && hugo<ze)) {
            printf("huguinho\n");
        }
        else {
            printf("luisinho\n");
        }
    }
    
    return 0;
}