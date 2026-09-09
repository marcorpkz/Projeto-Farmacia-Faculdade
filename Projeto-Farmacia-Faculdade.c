#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char nome[100], cpf[20], nascimento[20];
    int opcao, opcaocarrinho, produto, quantidade, pagamento;
    int dipirona = 0, vitamina = 0, sabonete = 0; 
    int shampoo = 0, camisinha = 0;
    int tadala = 0, DIU = 0, antiaids = 0; 
    int lactopurga = 0, coca = 0;
    int promocao;
    float total;
    float gastos = 0;

    printf("===== CADASTRO =====\n");
    printf("Digite seu nome completo: ");
    fgets(nome, 100 , stdin);
    printf("Digite seu CPF: ");
    fgets(cpf, 20, stdin);
    printf("Digite sua data de nascimento (dd/mm/aaaa): ");
    fgets(nascimento, 20, stdin);
    printf("\nCadastro feito com sucesso!\n");

    
    srand(time(NULL));
    promocao = (rand() % 7) + 1;
    do {

        printf("\n===== FARMACIA =====\n");
        if (promocao > 0) {
                if (promocao == 1) {printf("\nPROMOCAO: Tadalafila a preco de banana 50%% OFF\n");}
                else if (promocao == 2) {printf("\nPROMOCAO: Furo no estoque, Camisinha 50%% OFF\n");}
                else if (promocao == 3) {printf("\nPROMOCAO: Mantenha suas pregas, Lactopurga pela metade do preço\n");}
                else if (promocao == 4) {printf("\nPROMOCAO: Sexo no pelo, Anti AIDS 20%% OFF\n");}
                else if (promocao == 5) {printf("\nPROMOCAO: Evite um acidente na BR, Extrato de coca 10%% OFF\n");}
                else if (promocao == 6) {printf("\nPROMOCAO: Elimine seus piolhos, Shampoo 5%% OFF\n");}
                else if (promocao == 7) {printf("\nPROMOCAO: Evite incomodo, use DIU 5%% OFF\n");}
            }
        printf("\n1 - Ver carrinho\n2 - Loja\n3 - Ver cadastro\n4 - Sair");
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
            printf("\n===== CARRINHO =====\n");
            total = (dipirona * 8.50) + 
                    (vitamina * 20.00) + 
                    (sabonete * 4.00) + 
                    (shampoo * 15.00) + 
                    (camisinha * 5.00) + 
                    (tadala * 25.00) + 
                    (DIU * 50.00) + 
                    (antiaids * 15.00) + 
                    (lactopurga * 10.00) + 
                    (coca * 50.00);
                    if (promocao == 1 && tadala > 0) {
                        total = total - (tadala * 25.00 * 0.50);
                        printf("\nDesconto da promocao aplicado para Tadalafila!\n");
                    }
                    if (promocao == 2 && camisinha > 0) {
                        total = total - (camisinha * 5.00 * 0.50);
                        printf("\nDesconto da promocao aplicado para Camisinha!\n");
                    }
                    if (promocao == 3 && lactopurga > 0) {
                        total = total - (lactopurga * 10.00 * 0.50);
                        printf("\nDesconto da promocao aplicado para Lactopurga!\n");
                    }
                    if (promocao == 4 && antiaids > 0) {
                        total = total - (antiaids * 15.00 * 0.20);
                        printf("\nDesconto da promocao aplicado para Anti AIDS!\n");
                    }
                    if (promocao == 5 && coca > 0) {
                        total = total - (coca * 50.00 * 0.10);
                        printf("\nDesconto da promocao aplicado para Extrato de coca!\n");
                    }
                    if (promocao == 6 && shampoo > 0) {
                        total = total - (shampoo * 15.00 * 0.05);
                        printf("\nDesconto da promocao aplicado para Shampoo!\n");
                    }
                    if (promocao == 7 && DIU > 0) {
                        total = total - (DIU * 50.00 * 0.05);
                        printf("\nDesconto da promocao aplicado para DIU!\n");
                    }
            if (dipirona == 0 && vitamina == 0 && sabonete == 0 && shampoo == 0 && camisinha == 0 && tadala == 0 && DIU == 0 && antiaids == 0 && lactopurga == 0 && coca == 0) {
                    printf("Seu carrinho esta vazio.\n");
            } else {
                    if (dipirona > 0) printf("\nDipirona (GENERICO): %d unidade(s) - R$ %.2f\n", dipirona, dipirona * 8.50);
                    if (vitamina > 0) printf("\nVitamina C (GENERICO): %d unidade(s) - R$ %.2f\n", vitamina, vitamina * 20.00);
                    if (sabonete > 0) printf("\nSabonete: %d unidade(s) - R$ %.2f\n", sabonete, sabonete * 4.00);
                    if (shampoo > 0) printf("\nShampoo: %d unidade(s) - R$ %.2f\n", shampoo, shampoo * 15.00);
                    if (camisinha > 0) printf("\nCamisinha: %d unidade(s) - R$ %.2f\n", camisinha, camisinha * 5.00);
                    if (tadala > 0) printf("\nTadalafila (MANIPULADO): %d unidade(s) - R$ %.2f\n", tadala, tadala * 25.00);
                    if (DIU > 0) printf("\nDIU: %d unidade(s) - R$ %.2f\n", DIU, DIU * 50.00);
                    if (antiaids > 0) printf("\nAnti AIDS (MANIPULADO): %d unidade(s) - R$ %.2f\n", antiaids, antiaids * 15.00);
                    if (lactopurga > 0) printf("Lactopurga: %d unidade(s) - R$ %.2f\n", lactopurga, lactopurga * 10.00);
                    if (coca > 0) printf("\nExtrato de coca (MANIPULADO): %d unidade(s) - R$ %.2f\n", coca, coca * 50.00);
                    printf("\nTotal da compra: R$ %.2f\n", total);
                    printf("\nDigite 1 para finalizar compra ou 0 para voltar: ");
                    scanf("%d", &opcaocarrinho);
                    if (opcaocarrinho == 1) {
                        printf("\nSelecione a forma de pagamento:\n1 - Cartao\n2 - Pix\n3 - Dinheiro\n0 - Voltar\n");
                        printf("\nEscolha uma opcao: ");
                        scanf("%d", &pagamento);
                            if (pagamento == 1 || pagamento == 2 || pagamento == 3) {
                                printf("\nCompra finalizada! Obrigado, %s\n", nome);
				                gastos = gastos + total;
                                dipirona = 0;
                                vitamina = 0;
                                sabonete = 0;
                                shampoo = 0;
                                camisinha = 0;
                                tadala = 0;
                                DIU = 0;
                                antiaids = 0;
                                lactopurga = 0;
                                coca = 0;
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
                printf("1 - Dipirona (GENERICO) - R$ 8.50\n2 - Vitamina C (GENERICO) - R$ 20.00\n");
                printf("3 - Sabonete - R$ 4.00\n4 - Shampoo - R$ 15.00\n");
                printf("5 - Camisinha - R$ 5.00\n6 - Tadalafila (MANIPULADO) - R$ 25.00\n");
                printf("7 - DIU - R$ 50.00\n8 - Anti AIDS (MANIPULADO) - R$ 15.00\n");
                printf("9 - Lactopurga - R$ 10.00\n10 - Extrato de coca (MANIPULADO) - R$ 50.00\n0 - Voltar\n");
                printf("\nQual produto deseja adicionar? ");
                scanf("%d", &produto);
                if (produto >= 1 && produto <= 10) {
                    printf("Quantidade: ");
                    scanf("%d", &quantidade);
                    if (quantidade > 0) {
                        if (produto == 1) dipirona = dipirona + quantidade;
                        else if (produto == 2) vitamina = vitamina + quantidade;
                        else if (produto == 3) sabonete = sabonete + quantidade;
                        else if (produto == 4) shampoo = shampoo + quantidade;
                        else if (produto == 5) camisinha = camisinha + quantidade;
                        else if (produto == 6) tadala = tadala + quantidade;
                        else if (produto == 7) DIU = DIU + quantidade;
                        else if (produto == 8) antiaids = antiaids + quantidade;
                        else if (produto == 9) lactopurga = lactopurga + quantidade;
                        else if (produto == 10) coca = coca + quantidade;
                        printf("Produto adicionado ao carrinho!\n");
                    } else printf("Quantidade invalida.\n");
                } else if (produto != 0) printf("Produto invalido.\n");
        }   
	
	    if (opcao == 3) {
	    printf("\n===== CADASTRO =====\n");
	    printf("Nome completo: %s", nome);
	    printf("CPF: %s", cpf);
	    printf("Data de nascimento: %s\n", nascimento); 
	    printf("Compras realizadas: %.2f\n", gastos);
        }

    } while (opcao != 4);

    return 0;
}