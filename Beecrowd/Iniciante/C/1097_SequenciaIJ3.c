/*
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
	
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13
*/


#include <stdio.h>
 
void MostraSequencia() {
    for (int i=1; i<=9; i+=2) {
        if (i == 1) {
            for (int j=7; j>=5; j--) {
                printf("I=%d J=%d\n", i, j);
            }
        }
        else {
            if (i == 3) {
                for (int j=9; j>=7; j--) {
                    printf("I=%d J=%d\n", i, j);
                }       
            }
            else {
                if (i == 5) {
                    for (int j=11; j>=9; j--) {
                        printf("I=%d J=%d\n", i, j);
                    }          
                }
                else {
                    if (i == 7) {
                        for (int j=13; j>=11; j--) {
                            printf("I=%d J=%d\n", i, j);
                        }                      
                    }
                    else {
                        for (int j=15; j>=13; j--) {
                            printf("I=%d J=%d\n", i, j);
                        }     
                    }
                }
            }
        }
    }
}

int main() {
    MostraSequencia();
    return 0;
}