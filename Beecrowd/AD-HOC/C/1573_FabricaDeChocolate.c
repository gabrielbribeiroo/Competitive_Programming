/*
Uma fábrica produz barras de chocolates no formato de paralelepípedos e de cubos, com o mesmo volume. 
Porém, como a máquina que produz os chocolates em formato de cubo está apresentando alguns problemas, os donos da fábrica pediram a sua ajuda para resolver este problema.
Sua tarefa é, dadas as dimensões das arestas do chocolate em formato de paralelepípedo, dizer qual é o tamanho que a aresta em formato de cubo deve ter.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    
    while (1) {
        scanf("%d %d %d", &a, &b, &c); // Leitura dos tamanhos das arestas do paralelepípedo de chocolate
        
        if (a==0 && b==0 && c==0) {
            break; // Condição de parada
        }
        
        int volume = a * b * c; // Calcula o volume do paralelepípedo
        int aresta_cubo = (int)cbrt(volume); // Calcula a aresta do cubo com o mesmo volume
        printf("%d\n", aresta_cubo); // Imprime a aresta do cubo
    }
    
    return 0;
}