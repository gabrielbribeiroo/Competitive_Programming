/*
Bem-vindo à 3ª Maratona de Programação Júnior da UFFS. 
Esperamos sinceramente que as próximas horas sejam muito produtivas para você, que você faça muitos balões e que, acima de tudo, você se divirta! 
Lembre que você sempre pode pedir esclarecimento quando não entender direito a descrição de um problema. 
Lembre também que às 17:30, os juízes automáticos serão desligados e a competição entrará em modo blind, de modo que todas as submissões neste período só começarão a ser julgadas às 18:10. 
Por favor, fique conosco até o fim da competição, trabalhando nas soluções dos problemas até o último minuto, pois, enquanto a competição ainda está ocorrendo, sempre há esperança!

E foi esperança que motivou a Vovó Zazá, uma senhora de 72 anos, a realizar seu sonho de começar um curso universitário. 
Ela está fascinada com tudo o que diz respeito à Universidade: com as aulas, com a biblioteca, com os projetos de pesquisa e extensão, com o restaurante universitário, mas especialmente com a carteirinha de estudante que ela pode utilizar para pagar meia entrada no cinema. 
Semana passada, Vovó Zazá e seus colegas de turma foram ao cinema assistir a um filme, mas ficaram estarrecidos com o aumento do preço do ingresso. 
Revoltados, eles decidiram fazer uma manifestação contra o sistema capitalista opressor, agendada para amanhã na Praça General Bertaso.
Vovó Zazá quer colaborar com o movimento fazendo um cartaz com a seguinte palavra de ordem: QUE ABSURDO! O PREÇO DO CINEMA SUBIU … % !!
Mas ela não é muito boa em Matemática, e está solicitando sua ajuda para calcular a porcentagem de que precisa para completar o cartaz.
*/

#include <stdio.h>
 
int main() {
    double before, after, percent;
    
    scanf("%lf %lf", &before, &after); // Lê os valores dos ingressos antes e depois do aumento
    
    percent = ((after-before) / before) * 100; // Calcula o aumento percentual
    
    printf("%.2lf%\n", percent); // Mostra o aumento percentual
    
    return 0;
}