/*
Faça um programa que leia as notas referentes às duas avaliações de um aluno. 
Calcule e imprima a média semestral. 
Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.
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
 
int main() {
    double nota1, nota2;
    
    LerNotas(&nota1, &nota2);
    MostrarMedia(nota1, nota2);
    
    return 0;
}