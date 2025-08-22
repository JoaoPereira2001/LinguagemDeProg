#include <stdio.h>

int main(){
    float nota1, nota2, nota3, frequencia, media;
    char conceito;

    do {
        printf("Digite a nota1: ");
        scanf("%f", &nota1);
    } while ( nota1 < 0 || nota1 > 10 ); // Verifica se é uma nota valida
    do {
        printf("Digite a nota2: ");
        scanf("%f", &nota2);
    } while ( nota2 < 0 || nota2 > 10 );  // Verifica se é uma nota valida
    do {
        printf("Digite a nota3: ");
        scanf("%f", &nota3);
    } while ( nota3 < 0 || nota3 > 10 ); // Verifica se é uma nota valida
    do {
        printf("Digite a frequencia: ");
        scanf("%f", &frequencia);
    } while ( frequencia < 0 || frequencia > 100 ); // Verifica se é uma frequencia valida

    media = (nota1+nota2+nota3) / 3; // Faz a media das notas

    if (media >= 9.0){
        conceito = 'A'; // Categoriza o conceito
    } else if (media <9.0 && media >=7.0){ 
        conceito = 'B';
    } else if (media <7.0 && media >5.0){
        conceito = 'C';
    } else {
        conceito = 'D';
    }

    printf("===RESULTADO FINAL===");
    printf("Media: %.2f\n", media);
    printf("conceito: %c\n", conceito);
    printf("Frequencia: %.1f%%\n", frequencia);
    
    if (media >=5.0 && frequencia >= 75.0){ // exibe o resultado se esta reprovado ou aprovado, caso reprovado entrega o motivo sendo nota, frequencia ou ambos
        printf("Aprovado!");
    } else if (media < 5.0){
        printf("Reprovado por nota!");
    } else if (frequencia < 75.0){
        printf("Reprovado por frequencia!");
    } else if ( media <75.00 && frequencia <75.0){
        printf("Reprovado por frequencia e nota!");
    }
    return 0;
}