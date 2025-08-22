#include <stdio.h>

int main(){
    double saldo;
    int consaldo, resaque, transf, sair, op, nome;
    double redepo;

    saldo = 1000;


    while(1){
    printf("====MENU DE OPERACOES====\n");
    printf("1. Consultar saldo\n");
    printf("2. Realizar deposito\n");
    printf("3. Realizar saque\n");
    printf("4. Transferencia\n");
    printf("5. Sair do sistema\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);
    switch (op){
        case 1:
        printf("====SALDO====\n");
        printf("Seu saldo atual é: %.2lf\n", saldo);
        break;
        case 2:
        printf("====DEPOSITO====\n");
        printf("Digite o valor para depositar(deposito min R$0.01): ");
        scanf("%lf", &redepo);
        if (redepo < 0.01){
            printf("Valor ivalido, faça a operação novamente!\n");
            break;
        }
        saldo = saldo + redepo;
        printf("Deposito realizado com sucesso\n");
        break;
        case 3:
        printf("====SAQUE====\n");
        printf("Digite um valor para saque: ");
        scanf("%lf", &resaque);
        if (resaque < saldo){
            printf("Saldo insuficiente!\n");
        } else if (resaque <= 500.00){
            printf("Operação realizada com sucesso!\n");
        } break;
        saldo = saldo - resaque;
        case 4:
        printf("====TRANSFERENCIA====\n");
        printf("Digite o nome para quem deseja transferir: ");
        scanf("%d", &nome);
        printf("Digite o valor a ser transferido: ");
        scanf("%lf", &transf);
        if (transf > saldo){
            printf("Saldo insuficiente!\n");
        } else if (transf <= saldo){
            printf("Tranferido %2lf para %d com sucesso!\n", transf, nome);
        }
        saldo = saldo - transf;
        case 5:
        printf("Obrigado por utilizar nosso sitema :)");
        return 0;
    }

    }
}