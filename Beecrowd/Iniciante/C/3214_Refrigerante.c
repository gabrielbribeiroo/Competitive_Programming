/*
Tim é um bebedor de refrigerante absolutamento obsessivo, ele simplesmente não consegue o suficiente. 
Mais irritantemente porém, ele quase nunca tem dinheiro, então sua única forma legal mais óbvia de obter mais refrigerante é pegar o dinheiro que ele recebe quando recicla garrafas vazias de refrigerante para comprar novas. 
Para adicionar com as garrafas resultantes de seu próprio consumo, ele às vezes encontra garrafas vazias na rua. 
Um dia ele estava com muita sede, então ele realmente bebeu refrigerantes até que ele não pudesse pagar um novo.
*/

#include <stdio.h>
 
int main() {
    int e, f, c;
    scanf("%d %d %d", &e, &f, &c); // Leitura da entrada
    
    int garrafas = e + f; // Número total de garrafas vazias no início
    int total_refrigerantes = 0; 
    
    // Enquanto houver garrafas suficientes para trocar por pelo menos um refrigerante
    while (garrafas >= c) {
        int novos_refrigerantes = garrafas / c; // Quantos refrigerantes novos Tim consegue trocar
        total_refrigerantes += novos_refrigerantes; // Incrementa o total de refrigerantes bebidos
        garrafas = garrafas % c + novos_refrigerantes; // Atualiza o número de garrafas vazias
    }
    
    printf("%d\n", total_refrigerantes); // Imprime o total de refrigerantes
    
    return 0;
}