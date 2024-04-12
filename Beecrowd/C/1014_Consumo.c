/*
Calcule o consumo médio de um automóvel sendo fornecidos:
    - a distância total percorrida (em Km);
    - o total de combustível gasto (em litros).
*/

#include <stdio.h>
 
int main() {
    int x;
    float y, consumo;
    
    scanf("%d\n%f", &x, &y);
    
    consumo = x / y;
    
    printf("%.3f km/l\n", consumo);
    
    return 0;
}