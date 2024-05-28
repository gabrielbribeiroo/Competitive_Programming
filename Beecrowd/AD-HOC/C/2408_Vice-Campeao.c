/*
A OBI (Organização de Bocha Internacional) é responsável por organizar a competição mundial de bocha. 
Infelizmente esse esporte não é muito popular, e numa tentativa de aumentar a sua popularidade, ficou decidido que seriam chamados, para a Grande Final Mundial, o campeão e o vice-campeão de cada sede nacional, ao invés de apenas o primeiro lugar.
Tumbólia é um país pequeno, que já havia realizado a sua competição nacional quando a nova regra foi instituída, e o comitê local não armazenou quem foi o segundo classificado. 
Felizmente, eles armazenaram a pontuação de todos competidores – que foram apenas três, devido ao tamanho diminuto do país. 
Sabe-se também que as pontuações de todos jogadores foram diferentes, de forma que não ocorreu empate entre nenhum deles.
Resta agora descobrir quem foi o vice-campeão e para isso o comitê precisa de ajuda.
*/

#include <stdio.h>
 
int main() {
    int comp1, comp2, comp3;
    
    scanf("%d %d %d", &comp1, &comp2, &comp3);

    if ((comp1>comp2 && comp1<comp3) || (comp1>comp3 && comp1<comp2)) {
        printf("%d\n", comp1);
    } 
    else {
        if ((comp2>comp1 && comp2<comp3) || (comp2>comp3 && comp2<comp1)) {
            printf("%d\n", comp2);
        }
        else {
            printf("%d\n", comp3);
        }
    }
    
    return 0;
}