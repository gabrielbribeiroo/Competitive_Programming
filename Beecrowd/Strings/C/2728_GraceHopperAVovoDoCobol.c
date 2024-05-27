/*
Grace Murray Hopper, também conhecida como "vovó do COBOL", foi analista de sistemas e almirante da Marina dos Estados Unidos, nas décadas de 1940 e 1950. 
Grace criou a linguagem de programação Flow-Matic que serviu como base para a criação do COBOL.
Além disso, ela também participou da criação do primeiro compilador de COBOL. 
Também conhecida por ter sido a criadora do termo BUG ocasionalmente, quando descobriu um problema no seu computador e percebeu que era um inseto morto na válvula, já que naquela época os computadores eram formados por válvulas. 
Desde então, o termo BUG passou a ser usado para erros. 
Grace Hopper é uma das mulheres mais importantes na história da participação feminina na computação, tendo seu nome em um dos congressos mais importantes, "Grace Hopper Celebration of Women in Computing".
Neste problema, são dadas cinco palavras em cada linha de teste separadas por hífen.
Para cada linha, será impressa a palavra 'GRACE HOPPER' se no texto de entrada forem encontradas as letras que formam a palavra COBOL no início ou fim de cada palavra em ordem. 
Caso não encontre, será impressa a palavra 'BUG'.
*/

#include <stdio.h>

#define TAM 51 // Tamanho máximo de caracteres da string
#define MAX 18 // Valor estimado das quantidades de teste, por tentativa e erro

void VerificarHifens(char str[], int hif[]) {
    int j = 0;
    
    for (int i=0; i<TAM; i++) {
        if (str[i] == '-') {
            hif[j] = i; // Identifica a posição hífen na linha
            j++;
        }
        else {
            if (str[i] == '\0') {
                hif[j] = i; // Identifica o final da string
                break;
            }
        }
    }
}

int IdentificarCobol(char str[], int hif[]) {
    int cont = 0; // Variável contadora para verificar a presença de cobol na string
    
    if (hif[0] == 0 || hif[1] == 0 || hif[2] == 0 || hif[3] == 0 || hif[4] == 0) {
        return 0;
    }
    
    // Estruturas condicionais para verificar se COBOL está presente antes ou depois do hífens (início ou final das palavras)
    if (str[0] == 'c' || str[0] == 'C' || str[hif[0]-1] == 'c' || str[hif[0]-1] == 'C') {
        cont++;
    }
    
    if (str[hif[0]+1] == 'o' || str[hif[0]+1] == 'O' || str[hif[1]-1] == 'o' || str[hif[1]-1] == 'O') {
        cont++;
    }
    
    if (str[hif[1]+1] == 'b' || str[hif[1]+1] == 'B' || str[hif[2]-1] == 'b' || str[hif[2]-1] == 'B') {
        cont++;
    }

    if (str[hif[2]+1] == 'o' || str[hif[2]+1] == 'O' || str[hif[3]-1] == 'o' || str[hif[3]-1] == 'O') {
        cont++;
    }
    
    if (str[hif[3]+1] == 'l' || str[hif[3]+1] == 'L' || str[hif[4]-1] == 'l' || str[hif[4]-1] == 'L') {
        cont++;
    }
    
    if (cont == 5) {
        return 1; // Se as 5 letras estão presentes, então forma COBOL
    }
    else {
        return 0;
    }
}

int main() {
    char frase[TAM]; // string
    int qnt_hifens[5] = {0,0,0,0,0}; // inicializa o vetor para contagem de hífens com 0 
    int resp[MAX]; // vetor para receber a contagem dos testes e a verificação de cobol
    
    for (int i=0; i<MAX; i++) {
        scanf("%s%*c", frase); // Lê a frase
        VerificarHifens(frase, qnt_hifens);
        resp[i] = IdentificarCobol(frase, qnt_hifens);
    }
    
    for (int j=0; j<MAX; j++) {
        if (resp[j] == 1) {
            printf("GRACE HOPPER\n"); // se cobol estiver presente, mostra "GRACE HOPPER"
        }
        else {
            printf("BUG\n"); // senão, mostra "BUG"
        }
    }
    
    return 0;
}
