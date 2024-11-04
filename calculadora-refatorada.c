#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Função de adição
void adicao(float n1, float n2) {
    printf("O resultado da adição é: %.2f\n", n1 + n2);
}
 
// Função de subtração
void subtracao(float n1, float n2) {
    printf("O resultado da subtração é: %.2f\n", n1 - n2);
}
 
// Função de multiplicação
void multiplicacao(float n1, float n2) {
    printf("O resultado da multiplicação é: %.2f\n", n1 * n2);
}
 
// Função de divisão com verificação de zero
void divisao(float n1, float n2) {
    if (n2 == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("O resultado da divisão é: %.2f\n", n1 / n2);
    }
}
 
int main(void) {
    setlocale(LC_ALL, "");
 
    int c = -1; // Inicializa a variável de escolha do usuário
    float n1, n2;
 
    while (c != 0) {
        // Menu de operações
        printf("\nQual operação deseja usar:\n");
        printf("1 - ADIÇÃO\n");
        printf("2 - SUBTRAÇÃO\n");
        printf("3 - MULTIPLICAÇÃO\n");
        printf("4 - DIVISÃO\n");
        printf("0 - SAIR\n");
        printf("Escolha uma opção: ");
        scanf("%d", &c);
 
        if (c == 0) {
            printf("Encerrando o programa.\n");
            break;
        }
 
        // Solicita os números apenas uma vez
        printf("Digite os dois números:\n");
        scanf("%f %f", &n1, &n2);
 
        // Executa a função correspondente
        switch (c) {
            case 1:
                adicao(n1, n2);
                break;
            case 2:
                subtracao(n1, n2);
                break;
            case 3:
                multiplicacao(n1, n2);
                break;
            case 4:
                divisao(n1, n2);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }
    return 0;
}
