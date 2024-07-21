#include <stdio.h>

int main(void) {
    long long n, k, dias = 0;

    scanf("%lld", &n);
    scanf("%lld", &k);

    if (n > k) {
        dias = 1;
    }
    else {
        for (int i=0; i<k; i+=n) {
            dias++;
        }
    }

    printf("%lld\n", dias);
}