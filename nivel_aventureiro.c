#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaCidade;

int main() {
    CartaCidade carta1, carta2;
    int opcao;

    // Cadastro da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado: "); scanf("%s", carta1.estado);
    printf("Código: "); scanf("%s", carta1.codigo);
    printf("Nome: "); scanf("%s", carta1.nome);
    printf("População: "); scanf("%d", &carta1.populacao);
    printf("Área (km²): "); scanf("%f", &carta1.area);
    printf("PIB (milhões): "); scanf("%f", &carta1.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta1.pontosTuristicos);

    // Cadastro da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado: "); scanf("%s", carta2.estado);
    printf("Código: "); scanf("%s", carta2.codigo);
    printf("Nome: "); scanf("%s", carta2.nome);
    printf("População: "); scanf("%d", &carta2.populacao);
    printf("Área (km²): "); scanf("%f", &carta2.area);
    printf("PIB (milhões): "); scanf("%f", &carta2.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta2.pontosTuristicos);

    printf("\nMenu de Comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nComparação de População:\n");
            if (carta1.populacao > carta2.populacao)
                printf("Vencedora: %s\n", carta1.nome);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedora: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("\nComparação de Área:\n");
            if (carta1.area > carta2.area)
                printf("Vencedora: %s\n", carta1.nome);
            else if (carta2.area > carta1.area)
                printf("Vencedora: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("\nComparação de PIB:\n");
            if (carta1.pib > carta2.pib)
                printf("Vencedora: %s\n", carta1.nome);
            else if (carta2.pib > carta1.pib)
                printf("Vencedora: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("\nComparação de Pontos Turísticos:\n");
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedora: %s\n", carta1.nome);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Vencedora: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}