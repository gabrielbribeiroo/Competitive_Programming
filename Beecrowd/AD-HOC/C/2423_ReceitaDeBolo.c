/*
João deseja fazer bolos para seus amigos, usando uma receita que indica que devem ser usadas 2 xícaras de farinha de trigo, 3 ovos e 5 colheres de sopa de leite. 
Em casa, ele tem A xícaras de farinha de trigo, B ovos e C colheres de sopa de leite.
João não tem muita prática com a cozinha, e portanto ele só se arriscará a fazer medidas exatas da receita de bolo (por exemplo, se ele tiver material suficiente para fazer mais do que 2 e menos do que 3 bolos, ele fará somente 2 bolos). 
Sabendo disto, ajude João escrevendo um programa que determine qual a quantidade máxima de bolos que ele consegue fazer.
*/

#include <stdio.h>
 
int main() {
    int farinha, ovos, leite;
    
    scanf("%d %d %d", &farinha, &ovos, &leite);
    
    // Quantidade de bolos que podem ser feitos com cada ingrediente
    int receitas_farinha = farinha/2;
    int receitas_ovos = ovos/3;
    int receitas_leite = leite/5;
    
    // O número máximo de bolos é o mínimo desses valores
    int max = receitas_farinha; // Inicializa uma quantidade de receitas possíveis
    
    // Atualiza o valor máximo possível de receitas
    if (receitas_ovos < max) {
        max = receitas_ovos;
    }
    if (receitas_leite < max) {
        max = receitas_leite;
    }
    
    printf("%d\n", max);
    
    return 0;
}