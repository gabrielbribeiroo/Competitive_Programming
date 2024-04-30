#include <stdio.h>
 
void LerValor(int *n) {
    scanf("%d", n);
}

void MostrarDivisiveisN(int n) {
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}
 
int main() {
    int num;
    
    LerValor(&num);
    MostrarDivisiveisN(num);
 
    return 0;
}