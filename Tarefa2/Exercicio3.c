#include <stdio.h>

int main(){
    double saldo, resaque, transf, redepo;
    int consaldo, sair, op;
    char nome[50];

    saldo = 1000;  // determina o valor do saldo inicial


    while(1){ // while para deixar em loop até que a op 5 seja escolhida
    printf("====MENU DE OPERACOES====\n"); // exibe o menu para escolha da op
    printf("1. Consultar saldo\n");
    printf("2. Realizar deposito\n");
    printf("3. Realizar saque\n");
    printf("4. Transferencia\n");
    printf("5. Sair do sistema\n");
    printf("Escolha uma opÃ§Ã£o: ");
    scanf("%d", &op);
    switch (op){ // determina a op a ser exibida
        case 1:
        printf("====SALDO====\n");
        printf("Seu saldo atual Ã©: %.2lf\n", saldo); // exibe o saldo, com %.2lf formatando para exibir somente 2 casas apos a virgula
        break;
        case 2:
        printf("====DEPOSITO====\n");
        printf("Digite o valor para depositar(deposito min R$0.01): ");
        scanf("%lf", &redepo);
        if (redepo < 0.01){  // não permite deposito menor que R$ 0.01
            printf("Valor ivalido, faÃ§a a operaÃ§Ã£o novamente!\n");
            break;
        }
        saldo = saldo + redepo; // atualiza o saldo
        printf("Deposito realizado com sucesso\n");
        break;
        case 3:
        printf("====SAQUE====\n");
        printf("Digite um valor para saque: ");
        scanf("%lf", &resaque);
        if (resaque > saldo){ // verifica se o valor do saque não é maior que o saldo existente
            printf("Saldo insuficiente!\n"); 
        } else if (resaque <= 500){ // verifica se a op não ultrapassa o limite de 500
            printf("OperaÃ§Ã£o realizada com sucesso!\n");
            saldo = saldo - resaque; // atualiza o valor do saldo existente
        } else {
        	printf("Limite excedido!\n");
		} break;
        case 4:
        printf("====TRANSFERENCIA====\n");
        printf("Digite o nome para quem deseja transferir: ");
        scanf("%s", &nome);
        printf("Digite o valor a ser transferido: ");
        scanf("%lf", &transf);
        if (transf > saldo){ // verifica se o valor do saque não é maior que o saldo existente
            printf("Saldo insuficiente!\n");
        } else if (transf <= 0){ // verifica se o valor do saque é maior ou igual a 0
            printf("Valor invalido!\n", transf); 
        } else {
        	printf("Transferencia para %s realizada com sucesso!\n", nome);
        	saldo = saldo - transf; // atualiza o valor do saldo existente
		} break;
        case 5:
        printf("Obrigado por utilizar nosso sitema :)");
        return 0; // encerra o programa
    }

    }
}
