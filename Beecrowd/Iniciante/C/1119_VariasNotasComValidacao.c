/*
Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. 
Calcule e imprima a média semestral. 
O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.
No final, deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). 
Se for informado o código 1, deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.
*/


#include <stdio.h>

double VerificarNota() {
    double nota;
    
    do {
       scanf("%lf", &nota);
       if (nota < 0 || nota > 10) {
           printf("nota invalida\n");
       }
    } while (nota < 0 || nota > 10);
    
    return nota;
}

void LerNotas(double *n1, double *n2) {
    *n1 = VerificarNota();
    *n2 = VerificarNota();
}

double CalcularMedia(double n1, double n2) {
    return (n1 + n2) / 2.0;
}

void MostrarMedia(double n1, double n2) {
    double media = CalcularMedia(n1, n2);
    printf("media = %.2lf\n", media);
}

int LoopingMedia() {
    int opcao;
    
    do {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &opcao);
    } while ((opcao != 1) && (opcao != 2));
    
    return opcao;
}
 
int main() {
    double nota1, nota2;
    int continuar = 1;
    
    while (continuar == 1) {
        LerNotas(&nota1, &nota2);
        MostrarMedia(nota1, nota2);
        continuar = LoopingMedia();
    }
    
    return 0;
}