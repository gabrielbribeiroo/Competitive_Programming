/*
Escreva um programa que leia:
    - número de um funcionário;
    - número de horas trabalhadas;
    - valor que recebe por hora.
Calcule o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>
 
int main() {
    int num, qnt_hrs; // Declara as variáveis num e qnt_horas do tipo inteiro
    float val_hr, salario; // Declara as variáveis val_hr e salario do tipo ponto flutuante
    
    scanf("%d\n%d\n%f\n", &num, &qnt_hrs, &val_hr); // Lê as variáveis num, qnt_hrs e val_hr
    
    salario = qnt_hrs * val_hr; // A variável salario recebe o produto entre qnt_hrs e val_hr
    
    printf("NUMBER = %d\n", num); // Mostra o número do funcionário
    printf("SALARY = U$ %.2f\n", salario); // Mostra o salário do funcionário
    
    return 0;
}