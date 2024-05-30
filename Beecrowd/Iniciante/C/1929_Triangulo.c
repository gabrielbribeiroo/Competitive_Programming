/*
Ana e suas amigas estão fazendo um trabalho de geometria para o colégio, em que precisam formar vários triângulos, numa cartolina, com algumas varetas de comprimentos diferentes. 
Logo, elas perceberam que não dá para formar triângulos com três varetas de comprimentos quaisquer: se uma das varetas for muito grande em relação às outras duas, não dá para formar o triângulo.
Neste problema, você precisa ajudar Ana e suas amigas a determinar se, dados os comprimentos de quatro varetas, é ou não é possível selecionar três varetas, dentre as quatro, e formar um triângulo.
*/

#include <stdio.h>
 
int main() {
    int a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d); // Leitura do comprimento de 4 varetas para tentar formar um triângulo
    
    // Verifica a condição de existência de um triângulo
    if ((a+b>c && a+c>b && b+c>a) || (a+b>d && a+d>b && b+d>a) || (a+c>d && a+d>c && c+d>a) || (b+c>d && b+d>c && c+d>b)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
    
}