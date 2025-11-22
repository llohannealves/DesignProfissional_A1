#include <stdio.h>

int main() {
    int opcao = 0;

    while (opcao != 4) {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Contar de 1 a 10 (FOR)\n");
        printf("2 - Verificar se numero e par ou impar (IF)\n");
        printf("3 - Tabuada de um numero (SWITCH + FOR)\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nContagem de 1 a 10:\n");
                for (int i = 1; i <= 10; i++) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 2: {
                int num;
                printf("\nDigite um numero: ");
                scanf("%d", &num);

                if (num % 2 == 0) {
                    printf("O numero %d e PAR.\n", num);
                } else {
                    printf("O numero %d e IMPAR.\n", num);
                }
                break;
            }

            case 3: {
                int n;
                printf("\nDigite um numero para ver a tabuada: ");
                scanf("%d", &n);

                printf("\nTabuada do %d:\n", n);
                for (int i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", n, i, n * i);
                }
                break;
            }

            case 4:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
