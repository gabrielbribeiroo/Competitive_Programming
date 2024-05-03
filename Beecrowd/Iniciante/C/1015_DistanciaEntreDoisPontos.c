/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2).
Calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
    Distancia = sqrt((x2 - x1)² + (y2 - y1)²)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, distancia;
    
    scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
    
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    
    printf("%.4f\n", distancia);
    
    return 0;
}