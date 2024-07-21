#include <stdio.h>

int main(void) {
    long long n;
    
    scanf("%lld", &n);

    if (n % 4 == 0) {
        printf("DERROTA\n");
    }
    else {
        printf("VITORIA\n");
    }
}