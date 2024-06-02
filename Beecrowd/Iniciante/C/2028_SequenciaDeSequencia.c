/*
Hyam é um menino que adora sequências. 
Ele anda descobrindo sequências interessantes que nem mesmo Fibonacci imaginaria. 
Certo dia, Hyam percebeu que dado um número N, ele poderia fazer uma sequência do tipo 0 1 2 2 3 3 3 4 4 4 4 ... N N N ... N. 
No entanto, Hyam percebeu que cada valor que aumentava no número da sequência, a quantidade total de números da sequência aumentava semelhantemente à um crescimento fatorial, neste caso, ao invés de multiplicar, soma-se o número total de números da sequência com o valor do próximo número da sequência. 
Por exemplo, se N = 2. A sequência correta seria 0 1 2 2, obtendo-se 4 digitos. 
Agora, se N = 3, o próximo número da sequência tem valor 3, então a quantidade total de número da sequência seria a quantidade de números com N = 2, que é 4, mais o valor do próximo número da sequência, neste caso 3, obtendo-se 7, já que a sequência correta para N = 3 é 0 1 2 2 3 3 3.
Sua tarefa é fazer um algoritmo que dado um número inteiro N, tenha como resposta a quantidade total de números dessa sequência e logo abaixo a sequência completa.
*/

#include <stdio.h>

int Contagem(int a) {
    int soma = 0, i;

    for (i=a; i>0; i--)
        soma += i;

    return ++soma;
}


int main () {
    int numero, i, j, k, cont = 0, caso = 0;

    while (scanf("%hd", &numero) != EOF) {
        if (numero==0) {
            caso++;
            printf("Caso %d: 1 numero\n", caso);
            printf("0\n\n");
        } 
        else {
            caso++;
            printf("Caso %d: %d numeros\n", caso, Contagem(numero));
            for(i=0; i<=numero; i++) {
                if (i == 0)
                    printf("0");

                for (j = i, k = 1; k <= i; k++)
                    printf(" %d", j);
            }

            printf("\n\n");
            cont = 0;
        }
    }
}

