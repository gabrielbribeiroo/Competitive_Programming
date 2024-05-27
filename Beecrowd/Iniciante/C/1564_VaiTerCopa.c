/*
O Brasil é o país sede da copa esse ano. 
Porém, há muitas pessoas protestando contra o governo. 
Em redes sociais, é possível ver pessoas afirmando que não vai ter copa, devido aos protestos.
Mas, esses rumores de que não haverá copa são totalmente falsos, a presidente Dilma Roussef já avisou: vai ter copa sim, e se reclamar vai ter duas!
*/

#include <stdio.h>

// Função para processar o número de reclamações e imprimir a resposta apropriada
void ProtestoGoverno(int n) {
    if (n == 0) {
        printf("vai ter copa!\n");
    }
    else {
        printf("vai ter duas!\n");
    }
}
 
// Função principal que lê a entrada até EOF e chama a função de processamento
int main() {
    int num;
    
    while (scanf("%d",&num) != EOF) {
        ProtestoGoverno(num); // Chama a função, enquanto o valorlido for diferente de EOF 
    }
    
    return 0;
}