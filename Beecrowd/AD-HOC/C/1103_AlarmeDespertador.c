/*
Daniela é enfermeira em um grande hospital, e tem os horários de trabalho muito variáveis. 
Para piorar, ela tem sono pesado, e uma grande dificuldade para acordar com relógios despertadores.
Recentemente ela ganhou de presente um relógio digital, com alarme com vários tons, e tem esperança que isso resolva o seu problema. 
No entanto, ela anda muito cansada e quer aproveitar cada momento de descanso. 
Por isso, carrega seu relógio digital despertador para todos os lugares, e sempre que tem um tempo de descanso procura dormir, programando o alarme despertador para a hora em que tem que acordar. 
No entanto, com tanta ansiedade para dormir, acaba tendo dificuldades para adormecer e aproveitar o descanso.
Um problema que a tem atormentado na hora de dormir é saber quantos minutos ela teria de sono se adormecesse imediatamente e acordasse somente quando o despertador tocasse. 
Mas ela realmente não é muito boa com números, e pediu sua ajuda para escrever um programa que, dada a hora corrente e a hora do alarme, determine o número de minutos que ela poderia dormir.
*/

#include <stdio.h>
 
int main() {
    int h1, m1; // Horas e minutos atuais
    int h2, m2; // Horas e minutos do despertador
    
    while (1) {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2); // Leitura dos valores de entrada
        
        // Condição de término
        if (h1==0 && m1==0 && h2==0 && m2==0) {
            break;
        }
        
        // Converter horas e minutos para minutos desde o início do dia
        int start_minutes = h1*60 + m1; 
        int alarm_minutes = h2*60 + m2;
        
        int sleep_minutes; 
        
        // Verifica se o alarme está no mesmo dia ou no dia seguinte
        if (alarm_minutes >= start_minutes) {
            sleep_minutes = alarm_minutes - start_minutes; 
        } 
        else {
            sleep_minutes = (24*60-start_minutes) + alarm_minutes;
        }
        
        printf("%d\n", sleep_minutes); // Imprime o resultado
    }
    
    return 0;
}