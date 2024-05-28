/*
O Carnaval é um feriado celebrado normalmente em fevereiro.
Em muitas cidades brasileiras, a principal atração são os desfiles de escolas de samba. 
As várias agremiações desfilam ao som de seus sambas-enredos e são julgadas pela liga das escolas de samba para determinar a campeã do Carnaval.
Cada agremiação é avaliada em vários quesitos.
Em cada quesito, cada escola recebe cinco notas que variam de 5,0 a 10,0. 
A nota final da escola, em um dado quesito, é a soma das três notas centrais recebidas pela escola, excluindo a maior e a menor das cinco notas.
Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que você escrevesse um programa que, dadas as notas da agremiação, calcula a sua nota final num dado quesito.
*/

#include <stdio.h>

void Sort(double arr[], int n) {
    // Ordenação dos elementos do array
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                float aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}
 
int main() {
    double notas[5];
    
    for (int i=0; i<5; i++) {
        scanf("%lf", &notas[i]); // Leitura das 5 notas
    }
    
    Sort(notas, 5); // Chamada da função
    double soma_notas = notas[1] + notas[2] + notas[3]; // Soma das 3 notas centrais
    printf("%.1lf\n", soma_notas);
    
    return 0;
}