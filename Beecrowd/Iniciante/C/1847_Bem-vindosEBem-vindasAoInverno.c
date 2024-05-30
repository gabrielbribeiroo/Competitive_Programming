/*
Bem-vindos e bem-vindas à Escola de Inverno da Maratona de Programação 2015 de Erechim! 
Esperamos sinceramente que vocês aprendam muito nestes dias para que tenham muito sucesso nas competições de Programação ainda por vir, mas sobretudo esperamos que vocês curtam a Escola, pois quando nos divertimos e temos prazer em estudar e programar, o treino deixa de ser um fardo e se torna um hobby. 
Então, divirtam-se!
O inverno é uma estação maravilhosa, não é mesmo? 
Todos nós amamos vestir um poncho, participar de uma roda de chimarrão, assar pinhões no fogão a lenha…
Mas nem todos gostam do inverno, especialmente em lugares onde o inverno costuma ser muito cruel. 
Em Westeros, por exemplo, o humor das pessoas é definido de acordo com as tendências climáticas. 
Com base nas temperaturas dos três últimos dias, as pessoas podem ficar tristes ou felizes, ficando mais propensas a fazer guerra ou fazer amor, respectivamente. 
E, sejamos sinceros, é justamente por causa das cenas de amor e de guerra que amamos Game of Thrones!

Se a temperatura desceu do 1º para o 2º dia, mas subiu ou permaneceu constante do 2º para o 3º, as pessoas ficam felizes (primeira figura).
Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu constante do 2º para o 3º, as pessoas ficam tristes (segunda figura).
Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficam tristes (terceira figura).
Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 2º para o 3º no mínimo o tanto que subira do 1º para o 2º, as pessoas ficam felizes (quarta figura).
Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º menos do que descera do 1º para o 2º, as pessoas ficam felizes (quinta figura).
Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes (sexta figura).
Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes se subiu do 2º para o 3º dia ou tristes caso contrário (respectivamente, sétima e oitava figuras).
*/

#include <stdio.h>
 
int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c); // Leitura das 3 temperaturas
    
    if (a>b && b<=c) {
        printf(":)\n");
    } else if (a<b && b>=c) {
        printf(":(\n");
    } else if (a<b && b<c && c-b<b-a) {
        printf(":(\n");
    } else if (a<b && b<c && c-b>=b-a) {
        printf(":)\n");
    } else if (a>b && b>c && b-c<a-b) {
        printf(":)\n");
    } else if (a>b && b>c && b-c>=a-b) {
        printf(":(\n");
    } else if (a==b && b<c) {
        printf(":)\n");
    } else if (a==b && b>=c) {
        printf(":(\n");
    }
    
    return 0;
}