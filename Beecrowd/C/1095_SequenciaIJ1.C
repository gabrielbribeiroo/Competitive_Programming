/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0
*/


#include <stdio.h>

void MostraSequencia() {
    for (int i=1, j=60; j>=0; i+=3, j-=5) {
        printf("I=%d J=%d\n", i, j);
    }
}

int main() {
    MostraSequencia();
    return 0;
}