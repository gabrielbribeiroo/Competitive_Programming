#include <stdio.h>

int main(void) {
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    
    int matriz[linhas][colunas];
    
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int count = 0;

    for (int i=0; i<linhas-1; i++) {
        for (int j=0; j<colunas-1; j++) {
            if ((matriz[i][j] == 1) && (matriz[i][j+1] == 1) && (matriz[i+1][j] == 1) && (matriz[i+1][j+1] == 1)) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}