/*
Leia 3 valores de ponto flutuante A, B e C.
Ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. 
A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
    - se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    - se A² = B² + C², apresente a mensagem: TRIANGULO RETANGULO
    - se A² > B² + C², apresente a mensagem: TRIANGULO OBTUSANGULO
    - se A² < B² + C², apresente a mensagem: TRIANGULO ACUTANGULO
    - se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    - se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/

#include <stdio.h>
#include <math.h>

void LerValores (double *n1, double *n2, double *n3) {
    scanf("%lf %lf %lf", n1, n2, n3);
}

void OrdenarValores(double *n1, double *n2, double *n3, double *p, double *s, double *t) {
    if ((*n1 <= *n2) && (*n1 <= *n3)) {
        *t = *n1;
        if (*n2 <= *n3) {
            *s = *n2;
            *p = *n3;
        } else {
            *s = *n3;
            *p = *n2;
        }
    }
    else {
        if ((*n2 <= *n1) && (*n2 <= *n3)) {
            *t = *n2;
            if ((*n1 <= *n3)) {
                *s = *n1;
                *p = *n3;   
            }
            else {
                *s = *n3;
                *p = *n1; 
            }
        }
        else {
            *t = *n3;
            if (*n1 <= *n2) {
                *s = *n1;
                *p = *n2;
            }
            else {
                *s = *n2;
                *p = *n1;
            }
        }
    }
}

int VerificarTriangulo(double *p, double *s, double *t) {
    if (((*p) + (*s) > (*t)) && ((*p) + (*t) > (*s)) && ((*s) + (*t) > (*p))) {
        return 1;
    }
    else {
        return 0;
    }
}

void ClassificarAngulosTriangulo(double *p, double *s, double *t) {
    if (pow(*p, 2) == pow(*s, 2) + pow(*t, 2)) {
        printf("TRIANGULO RETANGULO\n");
    }
    else {
        if (pow(*p, 2) > pow(*s, 2) + pow(*t, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else {
            printf("TRIANGULO ACUTANGULO\n");
        }
    }
}


void ClassificarLadosTriangulo(double *p, double *s, double *t) {
    if (((*p) == (*s)) && ((*s) == (*t))) {
        printf("TRIANGULO EQUILATERO\n");
    }
    else {
        if (((*p) == (*s)) || ((*s) == (*t)) || ((*p) == (*t))) {
            printf("TRIANGULO ISOSCELES\n");
        }
        else {
            return;
        }
    }
}

int main() {
    double a, b, c, primeiro, segundo, terceiro;
    
    LerValores(&a, &b, &c);
    OrdenarValores(&a, &b, &c, &primeiro, &segundo, &terceiro);
    
    if (VerificarTriangulo(&primeiro, &segundo, &terceiro)) {
        ClassificarAngulosTriangulo(&primeiro, &segundo, &terceiro);
        ClassificarLadosTriangulo(&primeiro, &segundo, &terceiro);
    } 
    else {
        printf("NAO FORMA TRIANGULO\n");
    }
    
    return 0;
}