/*
João está comprando móveis novos para sua casa. 
Agora é a vez de comprar um colchão novo, de molas, para substituir o colchão velho. 
As portas de sua casa têm altura H e largura L e existe um colchão que está em promoção com dimensões A × B × C.
O colchão tem a forma de um paralelepípedo reto retângulo e João só consegue arrastá-lo através de uma porta com uma de suas faces paralelas ao chão, mas consegue virar e rotacionar o colchão antes de passar pela porta.
Entretanto, de nada adianta ele comprar o colchão se ele não passar através das portas de sua casa. 
Portanto, ele quer saber se consegue passar o colchão pelas portas e para isso precisa de sua ajuda.
*/

#include <stdio.h>
 
int main() {
    int a, b, c, h, l;
    
    scanf("%d %d %d", &a, &b, &c); // Leitura das dimensões do colchão
    scanf("%d %d", &h, &l); // Leitura das dimensões da porta
    
    // Verifica se o colchão passa pela porta
    if ((a<=h && b<=l) || (a<=l && b<=h) || (a<=h && c<=l) || (a<=l && c<=h) || (b<=h && c<=l) || (b<=l && c<=h)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
}