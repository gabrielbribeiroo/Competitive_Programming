/*
Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>
 
int main() {
    double a, b, c, media; // Declara as variáveis a, b, c e média
    
    scanf("%lf\n%lf\n%lf", &a, &b, &c); // Lê aos valores das variáveis a, b e c
    
    media = ((a*2) + (b*3) + (c*5)) / 10.0; // A média é a média ponderada entre a, b e c
    
    printf("MEDIA = %.1f\n", media); // Mostra a média
    
    return 0;
}