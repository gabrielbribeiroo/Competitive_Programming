/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. 
Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas.
Mostre esta média acompanhada pela mensagem "Media: ". 
Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". 
Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". 
Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".
No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. 
Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. 
Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). 
Imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). 
Para estes dois casos (aprovado ou reprovado após ter pego exame), apresente na última linha uma mensagem "Media final: ", seguida pela média final do aluno.
*/

#include <stdio.h>

#define peso1 2
#define peso2 3
#define peso3 4
#define peso4 1

void LerNotas(double *n1, double *n2, double *n3, double *n4) {
    scanf("%lf %lf %lf %lf", n1, n2, n3, n4);
}

double CalcularMedia(double *n1, double *n2, double *n3, double *n4, double *m) {
    *m = ((*n1 * peso1) + (*n2 * peso2) + (*n3 * peso3) + (*n4 * peso4)) / (peso1 + peso2 + peso3 + peso4);
    return *m;
}

int VerificarMedia(double *m) {
    printf("Media: %.1lf\n", *m);
    
    if (*m >= 7) {
        printf("Aluno aprovado.\n");
        return 1;
    }
    else {
        if (*m < 5) {
            printf("Aluno reprovado.\n");
            return 2;
        }
        else {
            printf("Aluno em exame.\n");
            return 3;
        }
    }
}

void CalcularFinal(double *m) {
    double nota_final, media_final = *m;
    
    scanf("%lf", &nota_final);
    printf("Nota do exame: %.1lf\n", nota_final);
    
    media_final = (nota_final + media_final) / 2;
    
    if (media_final >= 5) {
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }
    
    printf("Media final: %.1lf\n", media_final);
}

int main() {
    double nota1, nota2, nota3, nota4, media;
    
    LerNotas(&nota1, &nota2, &nota3, &nota4);
    CalcularMedia(&nota1, &nota2, &nota3, &nota4, &media);
    int resultado = VerificarMedia(&media);
    
    if (resultado == 3) {
        CalcularFinal(&media);
    }

    return 0;
}