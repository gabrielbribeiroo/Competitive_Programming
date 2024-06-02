/*
Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios em sequência. 
O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. 
Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. 
Mas ele está definitivamente pirado. 
Quando passa pelo sítio Estrela i, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e segue ou para Estrela i + 1 ou para Estrela i - 1, dependendo se o número de carneiros em Estrela i era, respectivamente, ímpar ou par. 
Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. 
O irmão louco começa sua Jornada em Estrela 1, roubando um carneiro do seu próprio sítio.
*/

#include <stdio.h>

int main() {

    long long int estrelas, soma = 0, posicaoTotal = 0;
    scanf("%lli", &estrelas); // Lê o número de estrelas

    long int carneiros[estrelas - 1], posicao[estrelas - 1];

    // Loop para ler os valores de X e inicializar posicao
    for(int i=0; i<estrelas; i++){
        scanf("%lli", &carneiros[i]); // Lê o número inicial de carneiros em cada estrela
        posicao[i] = 0; // Inicializa posicao para cada estrela como 0
    }

    // Loop para simular a jornada do irmão louco
    for(int i=0; i>=0 && i<estrelas; ){
        // Verifica se ainda há carneiros na estrela atual
        if(carneiros[i] >= 1){
            // Verifica se o irmão já passou pela estrela
            if(posicao[i] == 0){
                posicao[i] = 1; // Marca a posição como visitada
                posicaoTotal++; // Incrementa o número total de estrelas visitadas
            }

            carneiros[i]--;  // Rouba um carneiro da estrela atual

            // Se o número de carneiros na estrela é ímpar
            if(carneiros[i] % 2) {
                i--; // Vai para a estrela anterior
            }
            else {
                i++; // Vai para a estrela seguinte
            }
        }
        else
            break; // Interrompe a jornada se não houver carneiros na estrela
    }

    for(int i=0; i<estrelas; i++){
        soma += carneiros[i]; // Calcula o número total de carneiros não roubados
    }

    printf("%lli %lli\n", posicaoTotal, soma); // Imprime o resultado

    return 0;
}