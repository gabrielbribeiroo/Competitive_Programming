/*
No crepúsculo, a cidade de Portland fica cheia de vampiros e lobisomens. 
Entretanto, nenhum deles quer ser visto enquanto passeiam pelo centro.
Vão ser instaladas câmeras de vigilância em cada esquina do centro de Portland. 
A cada mês, um mapa atualizado com as câmeras já em funcionamento é disponibilizado no site da prefeitura.
Uma quadra é considerada segura se existem câmeras em, pelo menos, duas de suas quatro esquinas. 
No centro de Portland todas as quadras são quadrados de mesmo tamanho.
Sua tarefa é, dado o mapa das câmeras em funcionamento nas esquinas, indicar o status de todas as quadras do centro.
*/

int mapa[101][101];

int Segura(int i, int j) {
    return mapa[i][j] + mapa[i+1][j] + mapa[i][j+1] + mapa[i+1][j+1] >= 2; // Análise das quadras e determinação de segurança
}

int main() {
    int num;
    scanf("%d", &num); // Leitura do valor de N
    
    for (int i=0; i<num+1; ++i) {
        for (int j=0; j<num+1; ++j) {
            scanf("%d", &mapa[i][j]); // Leitura da matriz
        }
    }

    for (int i=0; i<num; ++i) {
        for (int j=0; j<num; ++j) {
            printf("%c", Segura(i, j) ? 'S' : 'U');
        }
        printf("\n");
    }

    return 0;
}