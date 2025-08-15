#include <stdio.h>

int main() {
    float temperaturaC, temperaturaF, metros, quilometros, libras, kilos;

    printf("====CONVERSOR DE UNIDADES====\n");
    printf("Digite a temperatura em Celsius: \n");
     scanf("%f", &temperaturaC); 
        temperaturaF = (temperaturaC * 9/5) + 32;

    printf("Digite a distancia em metros: \n");
     scanf("%f", &metros); 
        quilometros = metros / 1000;
        
    printf("Digite o peso em kilos: \n");
        scanf("%f", &kilos); 
            libras = kilos * 2.20462;   

    printf("A temperatura em Fahrenheit e: %.2f\n", temperaturaF);
    printf("A distancia em quilometros e: %.2f\n", quilometros);
    printf("O peso em libras e: %.2f\n", libras);
    return 0;
}    