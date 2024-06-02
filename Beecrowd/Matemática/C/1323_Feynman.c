/*
Richard Phillips Feynman era um físico americano muito famoso e ganhador do Prêmio Nobel de Física. 
Ele trabalhava em física teórica e também foi pioneiro no campo da computação quântica. 
Ele visitou a América do Sul por dez meses, dando palestras e aproveitando a vida nos trópicos. 
Ele também é conhecido pelos livros "Surely You’re Joking, Mr. Feynman!" e "What Do You Care What Other People Think?", que inclui algumas de suas aventuras abaixo do equador.
Sua paixão da vida inteira era resolver e criar quebra-cabeças, trancas e códigos. 
Recentemente, um fazendeiro idoso da América do Sul, que hospedou o jovem físico em 1949, achou alguns papéis e notas que acredita-se terem pertencido a Feynman. 
Entre anotações sobre mesóns e eletromagnetismo, havia um guardanapo onde ele escreveu um simples desafio: "quantos quadrados diferentes existem em um quadriculado de N x N quadrados?".
No mesmo guardanapo havia um desenho, que está reproduzido abaixo, mostrando que para N = 2, a resposta é 5.
*/
#include <stdio.h>

int main() {
    int num;

    while (1) {
        scanf("%d", &num);
        if (num == 0) 
            break;

        int total_quadrados = 0;
        for (int tam=1; tam<=num; tam++) {
            total_quadrados += (num-tam+1) * (num-tam+1);
        }

        printf("%d\n", total_quadrados);
    }

    return 0;
}
