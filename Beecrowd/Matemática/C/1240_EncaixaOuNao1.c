/*
Paulinho tem em suas mãos um pequeno problema. 
A professora lhe pediu que ele construísse um programa para verificar, à partir de dois valores inteiros A e B, se B corresponde aos últimos dígitos de A.
*/

#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n); // Leitura da quantidade de casos de teste
    
    for (int i=0; i<n; i++) {
        char a[20], b[20]; 
        scanf("%s %s", a, b);
        
        int len_a = strlen(a);
        int len_b = strlen(b);
        
        // Verifica se B é um sufixo de A
        if (len_a >= len_b && strcmp(&a[len_a - len_b], b) == 0) {
            printf("encaixa\n");
        }
        else {
            printf("nao encaixa\n");
        }
        
    }
 
    return 0;
}