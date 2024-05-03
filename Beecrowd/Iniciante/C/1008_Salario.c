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
    int num, qnt_hrs;
    float val_hr, salario;
    
    scanf("%d\n%d\n%f\n", &num, &qnt_hrs, &val_hr);
    
    salario = qnt_hrs * val_hr;
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);
    
    return 0;
}