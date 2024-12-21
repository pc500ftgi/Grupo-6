#include <stdio.h>

// Declarações das funções dos outros arquivos
void temperatura();
void volume();

int main() {
    int opcao;

    do {
        printf("\nConversor de Unidades\n");
        printf("1. Converter Temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("2. Converter Volume (litros, mililitros, metros cúbicos)\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                temperatura();
                break;
            case 2:
                volume();
                break;
            case 3:
               printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
