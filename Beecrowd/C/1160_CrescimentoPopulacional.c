/*
Mariazinha quer resolver um problema interessante. 
Dadas as informações de população e a taxa de crescimento de duas cidades quaisquer (A e B), ela gostaria de saber quantos anos levará para que a cidade menor (sempre é a cidade A) ultrapasse a cidade B em população. 
Claro que ela quer saber apenas para as cidades, cuja taxa de crescimento da cidade A é maior do que a taxa de crescimento da cidade B, portanto, previamente já separou para você apenas os casos de teste que tem a taxa de crescimento maior para a cidade A. 
Sua tarefa é construir um programa que apresente o tempo em anos para cada caso de teste.
Porém, em alguns casos o tempo pode ser muito grande, e Mariazinha não se interessa em saber exatamente o tempo para estes casos. 
Basta que você informe, nesta situação, a mensagem "Mais de 1 seculo.".
*/

#include <stdio.h>
#include <math.h>

void LerQuantidadeTeste(int *t) {
    scanf("%d", t);
}

// Função para calcular quantos anos levará para A ultrapassar B em população
void AnosParaUltrapassar(int t) {
    int pa, pb;
    double g1, g2;
    for (int i=0; i<t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        int anos = 0;
        while (pa <= pb) {
            pa = floor(pa * (1 + g1 / 100));
            pb = floor(pb * (1 + g2 / 100));
            anos++;
            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100) {
           printf("%d anos.\n", anos); 
        }
    }
}
 

 
int main() {
    int qnt_teste; 
    
    LerQuantidadeTeste(&qnt_teste);
    AnosParaUltrapassar(qnt_teste);
    
    return 0;
}