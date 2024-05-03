/*
Um posto de combustível deseja determinar qual de seus produtos tem a preferência de seus clientes. 
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4), deve ser solicitado um novo código (até que seja válido). 
O programa será encerrado quando o código informado for o número 4.
*/

#include <stdio.h>

void VerificarCodigo(int *alcool, int *gasolina, int *diesel) {
    int codigo;
    
    do {
        scanf("%d", &codigo);
        
        switch (codigo) {
            case 1:
                (*alcool)++;
                break;
            case 2:
                (*gasolina)++;
                break;
            case 3:
                (*diesel)++;
                break;
        }
        
    } while (codigo != 4);
}

void MostrarQuantidades(int alcool, int gasolina, int diesel) {
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
}
 
int main() {
    int qnt_alcool = 0, qnt_gasolina = 0, qnt_diesel = 0;
    
    VerificarCodigo(&qnt_alcool, &qnt_gasolina, &qnt_diesel);
    MostrarQuantidades(qnt_alcool, qnt_gasolina, qnt_diesel);
    
    return 0;
}