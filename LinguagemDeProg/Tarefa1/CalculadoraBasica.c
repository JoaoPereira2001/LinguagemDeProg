#include <stdio.h>

int main() {
   
float num1, num2, resultado1, resultado2, resultado3, resultado4;

printf("====CALCULADORA BASICA====\n");
printf("Digite o primeiro numero: \n");
scanf("%f", &num1);
printf("Digite o segundo numero: \n");
scanf("%f", &num2);

resultado1 = num1 + num2;

resultado2 = num1 - num2;

resultado3 = num1 * num2;   

resultado4 = num1 / num2;   

printf("A soma dos numeros e: %.2f\n", resultado1);
printf("A subtracao dos numeros e: %.2f\n", resultado2);
printf("A multiplicacao dos numeros e: %.2f\n", resultado3);
printf("A divisao dos numeros e: %.2f\n", resultado4);

return 0;
}       