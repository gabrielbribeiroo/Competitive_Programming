#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int h, t, e;
    int nao_atendidos = 0; 
    int tempo_atual = 0;

    for (int i=0; i<n; i++) {
        scanf("%d %d %d", &h, &t, &e);

        if (h+e >= tempo_atual) {
            if (h > tempo_atual) {
                tempo_atual = h;
            }
            tempo_atual += t;
        }
        else {
            nao_atendidos++;
        }
    }

    printf("%d\n", nao_atendidos);

    return 0;
}