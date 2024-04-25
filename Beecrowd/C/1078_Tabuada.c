/*
Leia 1 valor inteiro N (2 < N < 1000). 
A seguir, mostre a tabuada de N:      
1 x N = N      
2 x N = 2N        
...
10 x N = 10N
*/

#include <stdio.h>

void LerValor(int *n) { 
    scanf("%d", n);
}

void TabuadaN(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i*n);
    }
}

int main() {
    int num;

    LerValor(&num);
    TabuadaN(num);

    return 0;
}