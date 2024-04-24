/*
Leia um valor inteiro N. 
Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.
*/

#include <stdio.h>

void LerValor(int *n) {
    scanf("%d", n);
}

int VerificarIntervalo(int n) {
    return (n >= 10 && n <= 20);
}


void Quantidade10A20(int *n, int *qnt_dentro, int *qnt_fora) {
    int x;
    
    for (int i=0; i < *n; i++) {
        scanf("%d", &x);
        
        if (VerificarIntervalo(x)) {
            (*qnt_dentro)++;
        }
        else {
            (*qnt_fora)++;
        }
    }
}

void MostrarQuantidadeIntervalo(int *qnt_dentro, int *qnt_fora) {
    printf("%d in\n", *qnt_dentro);
    printf("%d out\n", *qnt_fora);
}

int main() {
    int num, qnt_dentro = 0, qnt_fora = 0;
    
    LerValor(&num);
    Quantidade10A20(&num, &qnt_dentro, &qnt_fora);
    MostrarQuantidadeIntervalo(&qnt_dentro, &qnt_fora);
    
    return 0;
}