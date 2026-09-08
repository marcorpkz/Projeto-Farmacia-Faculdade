#include <stdio.h>

int main() {
    char nome[100], cpf[20], nascimento[20];
    int opcao, opcaocarrinho, produto, quantidade, pagamento;
    int dipirona = 1, vitamina = 0, sabonete = 0, shampoo = 0;
    int promocao;
    float total;

    printf("===== CADASTRO =====\n");
    printf("Digite seu nome completo: ");
    fgets(nome, 100 , stdin);
    printf("Digite seu CPF: ");
    fgets(cpf, 20, stdin);
    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    fgets(nascimento, 20, stdin);
    printf("\nCadastro feito com sucesso, %s!\n", nome);

    do {
        printf("\n===== FARMACIA =====\n");
        printf("1 - Ver carrinho\n2 - Loja\n3 - Ver promocao do dia\n4 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) {
            printf("\nOpcao invalida. Tente novamente.\n");
        }

        if (opcao == 4) {
            printf("\nVolte sempre, %s!\n", nome);
            break;
        }

        if (opcao == 1) {
            total = (dipirona * 8.50) + (vitamina * 20.00) + (sabonete * 4.00) + (shampoo * 15.00);
            printf("\n===== CARRINHO =====\n");
            if (dipirona == 0 && vitamina == 0 && sabonete == 0 && shampoo == 0) {
                    printf("Seu carrinho esta vazio.\n");
            } else {
                    if (dipirona > 0) printf("Dipirona: %d unidade(s) - R$ %.2f\n", dipirona, dipirona * 8.50);
                    if (vitamina > 0) printf("Vitamina C: %d unidade(s) - R$ %.2f\n", vitamina, vitamina * 20.00);
                    if (sabonete > 0) printf("Sabonete: %d unidade(s) - R$ %.2f\n", sabonete, sabonete * 4.00);
                    if (shampoo > 0) printf("Shampoo: %d unidade(s) - R$ %.2f\n", shampoo, shampoo * 15.00);
                    printf("\nTotal da compra: R$ %.2f\n", total);
                    printf("\nDigite 1 para finalizar compra ou 0 para voltar: ");
                    scanf("%d", &opcaocarrinho);
                    if (opcaocarrinho == 1) {
                        printf("\nSelecione a forma de pagamento:\n1 - Cartao\n2 - Pix\n3 - Dinheiro\n0 - Voltar\n");
                        printf("\nEscolha uma opcao: ");
                        scanf("%d", &pagamento);
                            if (pagamento == 1 || pagamento == 2 || pagamento == 3) {
                                printf("\nCompra finalizada! Obrigado, %s\n", nome);
                                dipirona = 0;
                                vitamina = 0;
                                sabonete = 0;
                                shampoo = 0;
                            } else if (pagamento == 0) {
                                printf("\nVoltando ao menu principal...\n");
                            } else {
                                printf("\nOpcao de pagamento invalida. Voltando ao menu principal...\n");
                            }
                            
                        
                    }
            }
            
        }
        
    } while (opcao != 4);

    return 0;
}
