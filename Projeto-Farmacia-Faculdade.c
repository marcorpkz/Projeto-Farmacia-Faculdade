#include <stdio.h>

int main() {
    char nome[100], cpf[20], nascimento[20];
    int opcao, opcaocarrinho, produto, quantidade, pagamento;
    int dipirona = 0, vitamina = 0, sabonete = 0, shampoo = 0;
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
            if (promocao > 0) {
                if (promocao == 1) printf("")
                else if (promocao == 2) {printf("")}
                else if (promocao == 3) {printf("")}
                else if (promocao == 4) {printf("")}
                else if (promocao == 5) {printf("")}
                else if (promocao == 6) {printf("")}
                else if (promocao == 7) {printf("")}
            }
        printf("1 - Ver carrinho\n2 - Loja\n3 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao != 1 && opcao != 2 && opcao != 3) {
            printf("\nOpcao invalida. Tente novamente.\n");
        }

        if (opcao == 3) {
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

        if (opcao == 2) {
            printf("\n===== LOJA =====\n");
                printf("1 - Dipirona - R$ 8.50\n2 - Vitamina C - R$ 20.00\n");
                printf("3 - Sabonete - R$ 4.00\n4 - Shampoo - R$ 15.00\n0 - Voltar\n");
                printf("\nQual produto deseja adicionar? ");
                scanf("%d", &produto);
                if (produto >= 1 && produto <= 4) {
                    printf("Quantidade: ");
                    scanf("%d", &quantidade);
                    if (quantidade > 0) {
                        if (produto == 1) dipirona = dipirona + quantidade;
                        else if (produto == 2) vitamina = vitamina + quantidade;
                        else if (produto == 3) sabonete = sabonete + quantidade;
                        else if (produto == 4) shampoo = shampoo + quantidade;
                        printf("Produto adicionado ao carrinho!\n");
                    } else printf("Quantidade invalida.\n");
                } else if (produto != 0) printf("Produto invalido.\n");
        }
        
    } while (opcao != 3);

    return 0;
}
