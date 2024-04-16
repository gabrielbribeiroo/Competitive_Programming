/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias.
Informe-a em anos, meses e dias.
Obs.: Considere todo ano com 365 dias e todo mês com 30 dias. 
*/

#include <stdio.h>
 
int main() {
    int anos, meses, dias, dias_sobras;
    
    scanf("%d", &dias);
    
    anos = dias / 365;
    dias_sobras = dias % 365;
    meses = dias_sobras / 30;
    dias_sobras = dias_sobras % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias_sobras);

    return 0;
}