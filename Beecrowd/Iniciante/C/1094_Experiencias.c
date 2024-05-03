/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.
*/

#include <stdio.h>
 
void LerQuantidadeTeste(int *n) {
    scanf("%d", n);    
}

void LerDados(int n, int q[], char t[]) {
    for (int i=0; i<n; i++) {
        scanf("%d %c", &q[i], &t[i]);
    }
}

void CalcularEApresentarQuantidades(int n, int q[], char t[]) {
    int tot_cobaias = 0, tot_r = 0, tot_s = 0, tot_c = 0;
    
    for (int i=0; i<n; i++) {
        tot_cobaias += q[i];
        switch (t[i]) {
            case 'C':
                tot_c += q[i];
                break;
            case 'R':
                tot_r += q[i];
                break;
            case 'S':
                tot_s += q[i];
                break;
        }
    }
    
    double percentual_c = (double) tot_c / tot_cobaias * 100;
    double percentual_r = (double) tot_r / tot_cobaias * 100;
    double percentual_s = (double) tot_s / tot_cobaias * 100;
    
    printf("Total: %d cobaias\n", tot_cobaias);
    printf("Total de coelhos: %d\n"
           "Total de ratos: %d\n"
           "Total de sapos: %d\n", tot_c, tot_r, tot_s);
    printf("Percentual de coelhos: %.2lf %\n"
           "Percentual de ratos: %.2lf %\n"
           "Percentual de sapos: %.2lf %\n", percentual_c, percentual_r, percentual_s);
}

int main() {
    int num;
    LerQuantidadeTeste(&num);
    
    int quantia[num];
    char tipo[num];
    LerDados(num, quantia, tipo);
    
    CalcularEApresentarQuantidades(num, quantia, tipo);
    
    return 0;
}