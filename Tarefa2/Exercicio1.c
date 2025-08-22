#include <stdio.h>

int main(){
    int PontInicial;
    int PontAtual;
    int dif;
    
    while(1){
        printf("Digite a pontuacao inicial: ");
        if (scanf("%d", &PontInicial) == 1) {
            if (PontInicial >=0){
                break;
            } //Valida para não aceitar um número negativo
        } 
    }
    printf("===PONTUAÇÃO===");

    PontAtual = PontInicial; // Define o valor para a pontuação Atual

    PontAtual += 50; //Add +50pts a pontuação atual
    printf("Ganhou uma fase +50pts, Pontuação atual: %d\n", PontAtual); 

    PontAtual *= 2; // Multiplica a pontuação por 2 a pontuação atual
    printf("Coletou um Item Especial x2 pts, Pontuação atual: %d\n", PontAtual); 

    PontAtual -= 30; // Diminui em 30 pts a pontuação atual
    printf("Perdeu uma vida -30 pts, Pontuação atual: %d\n", PontAtual); 

    PontAtual += 15; // Soma 15 pts a pontuação atual
    printf("Bonus de tempo +15 pts, Pontuação atual: %d\n", PontAtual); 

    PontAtual /= 3; // Divide por 3 a pontuação atual
    printf("Penalidade por dificuldade /3, Pontuação atual: %d\n", PontAtual);

    PontAtual += 100; // Soma +100pts a pontuação atual
    printf("Bonus final +100 pts, Pontuação atual: %d\n", PontAtual);

    printf("===FIM DE JOOGO===");
    printf("Pontuação final: %d\n", PontAtual);
    dif = PontAtual - PontInicial; // Define a diferença da pontuação sendo a pontuação incial(colocada pelo usuario) - a pontuação final após todos os eventos
    printf("Diferença de pontuação: %d", dif);

}