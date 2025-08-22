#include <stdio.h>

int main() {

    float peso;
    float altura;
    int   idade;
    char  sexo;

    printf("--- Calculadora de IMC ---\n");

    printf("Digite seu peso em kg (use PONTO, ex: 75.5): ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros (use PONTO, ex: 1.80): ");
    scanf("%f", &altura);

    printf("Digite sua idade em anos (ex: 30): ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (peso <= 0 || altura <= 0 || idade <= 0) {
        printf("\nErro! Peso, altura e idade devem ser numeros positivos.\n");
        return 1;
    }

    float imc = peso / (altura * altura); // calcula o valor do imc

    printf("\n-------------------------------------\n");
    printf("           SEU RESULTADO           \n");
    printf("-------------------------------------\n");

    printf("Seu IMC e: %.2f\n", imc);
    printf("Sua classificacao e: ");

    if (imc < 18.5) { // Verifica onde vc se encaixa
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }

    printf("\n--- RECOMENDACOES PARA VOCE ---\n");

    if ((sexo == 'M' || sexo == 'm') && imc >= 25.0) { // aceita m tanto maiusculo quanto minusculo para definir seu sexo
        printf("- Para homens com sobrepeso/obesidade, exercicios de forca sao uma boa pedida!\n");
    }

    if ((sexo == 'F' || sexo == 'f') && imc >= 25.0) { // aceita m tanto maiusculo quanto minusculo para definir seu sexo
        printf("- Para mulheres com sobrepeso/obesidade, que tal tentar exercicios aerobicos como corrida ou natacao?\n");
    }

    if (idade >= 60 && imc < 18.5) { //  verifica se tem 60 anos ou mais e esta com imc abaixo de 18.5
        printf("- Como voce tem 60 anos ou mais e esta abaixo do peso, e importante consultar um geriatra.\n");
    }

    if (idade <= 25 && imc >= 30.0) { // verifica se tem 25 anos ou menos e se esta com o imc menor ou igual a 30
        printf("- Como voce e jovem e esta com obesidade, procurar um nutricionista pode te ajudar muito!\n");
    }

    return 0;
}
