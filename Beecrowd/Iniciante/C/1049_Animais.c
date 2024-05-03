/*
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível. 
Em seguida, conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.
*/

#include <stdio.h>
#include <string.h>

void LerPalavras(char *p1, char *p2, char *p3) {
    fgets(p1, 20, stdin);
    p1[strcspn(p1, "\n")] = '\0';
    fgets(p2, 20, stdin);
    p2[strcspn(p2, "\n")] = '\0';
    fgets(p3, 20, stdin);
    p3[strcspn(p3, "\n")] = '\0';
}

void IdentificarAnimal(char *p1, char *p2, char *p3) {
    if (strcmp(p1, "vertebrado") == 0) {
        if (strcmp(p2, "ave") == 0) {
            if (strcmp(p3, "carnivoro") == 0) {
                printf("aguia\n");
            }
            else {
                if (strcmp(p3, "onivoro") == 0) {
                    printf("pomba\n");
                }
            }
        }
        else {
            if (strcmp(p2, "mamifero") == 0) {
                if (strcmp(p3, "onivoro") == 0) {
                    printf("homem\n");
                }
                else {
                    if (strcmp(p3, "herbivoro") == 0) {
                        printf("vaca\n");
                    }
                }
            }
        }
    }
    else {
        if (strcmp(p1, "invertebrado") == 0) {
            if (strcmp(p2, "inseto") == 0) {
                if (strcmp(p3, "hematofago") == 0) {
                    printf("pulga\n");
                }
                else {
                    if (strcmp(p3, "herbivoro") == 0) {
                        printf("lagarta\n");
                    }
                }
            }
            else {
                if (strcmp(p2, "anelideo") == 0) {
                    if (strcmp(p3, "hematofago") == 0) {
                        printf("sanguessuga\n");
                    }
                    else {
                        if (strcmp(p3, "onivoro") == 0) {
                            printf("minhoca\n");
                        } 
                    }
                }
            }
        }
    }
}

int main() {
    char palavra1[20], palavra2[20], palavra3[20];
    
    LerPalavras(palavra1, palavra2, palavra3);
    IdentificarAnimal(palavra1, palavra2, palavra3);
    
    return 0;
}