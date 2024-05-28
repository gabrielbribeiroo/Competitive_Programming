/*
A Betalândia é um país que apenas recentemente se abriu para o comércio exterior e está preparando agora sua primeira grande exportação. 
A Sociedade Betalandesa de Comércio (SBC) ficou encarregada de conduzir a exportação e determinou que, seguindo os padrões internacionais, a carga será transportada em contêineres, que são, por sua vez, colocados em grandes navios para o transporte internacional.
Todos os contêineres betalandeses são idênticos, medindo A metros de largura, B metros de comprimento e C metros de altura.
Um navio porta-contêineres pode ser visto como um retângulo horizontal de X metros de largura e Y metros de comprimento, sobre o qual os contêineres são colocados.
Nenhuma parte de contêiner pode ficar para fora do navio. 
Além disso, para possibilitar a travessia de pontes, a altura máxima da carga no navio não pode ultrapassar Z metros.
Devido a limitações do guindaste utilizado, os contêineres só podem ser carregados alinhados com o navio.
Ou seja, os contêineres só podem ser colocados sobre o navio, de tal forma que a largura e o comprimento do contêiner estejam paralelos à largura e ao comprimento do navio, respectivamente.
A SBC está com problemas para saber qual a quantidade máxima de contêineres que podem ser colocados no navio e pede sua ajuda. 
Sua tarefa, neste problema, é determinar quantos contêineres podem ser carregados no navio, respeitando as restrições acima.
*/

#include <stdio.h>
 
int main() {
    int a, b, c, x, y, z;
    
    scanf("%d %d %d", &a, &b, &c); // Leitura das dimensões dos contêineres
    scanf("%d %d %d", &x, &y, &z); // Leitura das dimensões do navio
    
    int tot_cont = (x/a) * (y/b) * (z/c);
    
    printf("%d\n", tot_cont);
    
    return 0;
}