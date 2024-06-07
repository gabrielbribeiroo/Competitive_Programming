/*
Dados três valores, verifique se os três podem formar um triângulo. 
Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.
*/

#include <stdio.h>
#include <math.h>

void ClassificaTriangulo(int a, int b, int c) {
    // Verifica o tipo de triângulo quanto aos lados
    if (a==b && b==c)
        printf("Equilatero\n");
    else if (a!=b && b!=c && a!=c)
        printf("Escaleno\n");
    else 
        printf("Isoceles\n");
}

void MaiorLadoTriangulo(int a, int b, int c, int *hipotenusa, int *cateto1, int *cateto2) {
    // Inicializa a hipotenusa como a maior de a, b, c e catetos como os outros dois
    if (a>b && a>c) {
        *hipotenusa = a;
        *cateto1 = b;
        *cateto2 = c;
    } 
    else if (b>a && b>c) {
        *hipotenusa = b;
        *cateto1 = a;
        *cateto2 = c;
    } 
    else {
        *hipotenusa = c;
        *cateto1 = a;
        *cateto2 = b;
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // Leitura dos lados 
    
    // Verifica a condição de existência
    if (a+b>c && a+c>b && b+c>a) {
        printf("Valido-");
        
        // Chamada das funções
        ClassificaTriangulo(a, b, c); 
        int hipotenusa, cateto1, cateto2;
        MaiorLadoTriangulo(a, b, c, &hipotenusa, &cateto1, &cateto2);
        
        // Verifica se o triângulo é retângulo    
        printf("Retangulo: ");
        if (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2)) {
            printf("S\n"); // É triângulo retângulo
        } 
        else {
            printf("N\n"); // Não é triângulo retângulo
        }
    } 
    else {
        printf("Invalido\n");
    }
    
    return 0;
}
