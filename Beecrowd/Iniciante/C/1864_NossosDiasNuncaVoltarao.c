/*
E aí?
Curtiu a Escola de Inverno deste ano? 
Para que esta Escola acontecesse, foram muitos que trabalharam, seja na elaboração dos problemas, na configuração do Portal, na logística do evento ou na captação dos recursos. 
Nosso agradecimento especial deste ano vai para o Prof. Ricardo Oliveira, que não somente aceitou vir ministrar as oficinas como também participou ativamente na organização da Escola.
Temos certeza que a experiência e a carreira dele no ICPC como competidor e como coach motivaram e inspiraram todos nós.
Esperamos que você tenha gostado desses últimos dias em Essos e em Westeros, que tenha aprendido bastante e que tenha se divertido. 
Mas não é só em Essos e em Westeros que você deve se divertir. 
Aqui, em Além da Muralha, programar também é divertido. 
Continue estudando, continue treinando, e cada vez mais. 
O importante é o caminho que você vai trilhar daqui para frente. 
Nosso conselho é que você procure sempre aproveitar ao máximo cada momento, cada oficina, cada escola, cada treino, cada tempo de prática ou estudo em casa. 
Nossos dias nunca voltarão.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED BUT A REALITY TO BE EXPERIENCED";
    
    scanf("%d", &num);
    
    for (int i=0; i<num; i++) {
        printf("%c", frase[i]); // Imprimir os primeiros N caracteres da frase
    }
    
    printf("\n"); // Finalizar com uma nova linha

    return 0;
}