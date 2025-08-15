#include <stdio.h>

int main() {
 
    int Idade, AnoAtual = 2025, AnoNascimento;
    char Nome[50], Curso[50];

    printf("Qual seu nome?\n");
    scanf("%s", Nome);

    printf("Qual sua idade?\n");
    scanf("%d", &Idade);
    AnoNascimento = AnoAtual - Idade;

    printf("Qual seu curso?\n");
    scanf("%s", Curso);

    printf("Ola %s, Voce tem %d anos, nasceu em %d e estuda %s\n", Nome, Idade, AnoNascimento, Curso);

   return 0; 
}