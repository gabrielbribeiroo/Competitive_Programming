/*
Todo ano após a competição que ocorre na cidade de Taxilândia, os participantes e os coaches vão para o célebre restaurante Radar. 
Porém, os garçons (sempre muito gentis e educados) ficam sobrecarregados devido à quantidade de pessoas, e consequentemente, acabam demorando um pouco para atender a um pedido.
Os participantes ou coaches que sentam nas pontas são os privilegiados, pois são atendidos com somente um pedido, mas os demais precisam sempre pedir duas vezes, pois os garçons (apesar de gentis e educados) são desatentos e se esquecem facilmente dos pedidos. 
Além disso, há uma superstição entre os participantes e coaches de que se não houver um número par de pessoas que não sentam nas pontas, na próxima competição nenhuma equipe da universidade conseguirá vencer.
Portanto, sua tarefa é determinar a soma da quantidade de pedidos de cada um para saber se vale a pena ir ao Radar. 
Mas apesar do resultado, lembre-se: sempre vale a pena ir ao Radar!
*/

#include <stdio.h>

int main() {
    int i, pessoas, qnt_teste, soma=0;

    while (1) {
        scanf("%d", &qnt_teste);

        if (qnt_teste==0)
            break;

        for (i=0; i<qnt_teste; ++i) {
            scanf("%d", &pessoas);

            if (pessoas % 2 == 0)
                soma = pessoas * 2 - 2;

            else
                soma = pessoas * 2 - 1;

            printf("%d\n", soma);
        }
    }

    return 0;
}