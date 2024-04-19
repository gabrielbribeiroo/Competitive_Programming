/*
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:
    Perimetro = XX.X
Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem:
    Area = XX.X
*/

#include <stdio.h>

void LerValores(double *n1, double *n2, double *n3) {
    scanf("%lf %lf %lf", n1, n2, n3);
}

int VerificarTriangulo(double *n1, double *n2, double *n3) {
    if (((*n1)+(*n2)>(*n3)) && ((*n1)+(*n3)>(*n2)) && ((*n2)+(*n3)>(*n1))) {
        return 1;
    }
    else {
        return 0;
    }
}

double PerimetroTriangulo(double *n1, double *n2, double *n3) {
    double perimetro = ((*n1) + (*n2) + (*n3));  
    printf("Perimetro = %.1lf\n", perimetro);
} 

double AreaTrapezio(double *n1, double *n2, double *n3) {
    double area = (((*n1) + (*n2)) * (*n3))/2;
    printf("Area = %.1lf\n", area);
}

int main() {
    double a, b, c;
    
    LerValores(&a, &b, &c);
    if (VerificarTriangulo(&a, &b, &c)) {
        PerimetroTriangulo(&a, &b, &c);
    }
    else {
        AreaTrapezio(&a, &b, &c);
    }
    
    return 0;
}