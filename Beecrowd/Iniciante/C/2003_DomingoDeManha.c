/*
Domingo é dia de feira. 
Logo de manhã muitas pessoas se deslocam para o polo de lazer da Parangaba, onde acontece uma feira, conhecida por ser a maior da cidade. 
Na feira da Parangaba você pode encontrar de tudo.
Todos os domingos, Bino faz compras na feira. 
Ele sempre marca com seu amigo Cino de se encontrarem no terminal de ônibus da Parangaba às 8h, para irem juntos comprar na feira. 
Porém, muitas vezes Bino acorda muito tarde e se atrasa para o encontro com seu amigo.
Sabendo que Bino leva de 30 a 60 minutos para chegar ao terminal. 
Diga o atraso máximo de Bino.
*/

#include <stdio.h>

int main() {
    int hora, minuto, resultado = 0;
    char ponto;

    while (scanf("%d %c %d", &hora, &ponto, &minuto) != EOF) {
        // Verificando o horário e calculando o atraso máximo
        if (hora >= 5 && hora <= 6)
            printf("Atraso maximo: %d\n", 0);   
        else if (hora == 7)
            printf("Atraso maximo: %d\n", minuto);
        else if (hora == 8)
            printf("Atraso maximo: %d\n", 60+minuto);
        else if (hora == 9)
            printf("Atraso maximo: %d\n", 120+minuto);
    }

    return 0;
}

