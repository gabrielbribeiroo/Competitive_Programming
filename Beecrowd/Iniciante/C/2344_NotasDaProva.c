/*
Rosy é uma talentosa professora do Ensino Médio que já ganhou muitos prêmios pela qualidade de sua aula. 
Seu reconhecimento foi tamanho que foi convidada a dar aulas em uma escola da Inglaterra. 
Mesmo falando bem inglês, Rosy ficou um pouco apreensiva com a responsabilidade, mas resolveu aceitar a proposta e encará-la como um bom desafio.
Tudo ocorreu bem para Rosy até o dia da prova. 
Acostumada a dar notas de 0 (zero) a 100 (cem), ela fez o mesmo na primeira prova dos alunos da Inglaterra. 
No entanto, os alunos acharam estranho, pois na Inglaterra o sistema de notas é diferente: as notas devem ser dadas como conceitos de A a E. 
O conceito A é o mais alto, enquanto o conceito E é o mais baixo.
Conversando com outros professores, ela recebeu a sugestão de utilizar a seguinte tabela, relacionando as notas numéricas com as notas de conceitos:
O problema é que Rosy já deu as notas no sistema numérico, e terá que converter as notas para o sistema de letras. 
Porém, Rosy precisa preparar as próximas aulas (para manter a qualidade que a tornou reconhecida), e não tem tempo suficiente para fazer a conversão das notas manualmente.
Você deve escrever um programa que recebe uma nota no sistema numérico e determina o conceito correspondente.
*/
#include <stdio.h>
 
int main() {
    int nota;
    scanf("%d", &nota); // Leitura da nota da prova do aluno
    
    // Verifica o conceito da nota
    if (nota == 0) 
        printf("E\\n");
    else if (nota>=1 && nota<=35)
        printf("D\n");
    else if (nota>=36 && nota<=60) 
        printf("C\n");
    else if (nota>=61 && nota<=85)
        printf("B\n");
    else 
        printf("A\n");
        
    return 0;
}