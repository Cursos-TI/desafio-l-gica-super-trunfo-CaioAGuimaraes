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

    // Exibe os dados cadastrados
    printf("\n--- Cartas cadastradas ---\n");
    printf("Carta 1: %s (%s) - População: %d, Área: %.2f, PIB: %.2f, Pontos Turísticos: %d\n",
        carta1.nome, carta1.estado, carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos);
    printf("Carta 2: %s (%s) - População: %d, Área: %.2f, PIB: %.2f, Pontos Turísticos: %d\n",
        carta2.nome, carta2.estado, carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos);

    // Comparação: População
    printf("\nComparação de População:\n");
    if (carta1.populacao > carta2.populacao) {
        printf("A carta vencedora é: %s (População maior)\n", carta1.nome);
    } else if (carta2.populacao > carta1.populacao) {
        printf("A carta vencedora é: %s (População maior)\n", carta2.nome);
    } else {
        printf("Empate em população!\n");
    }

    return 0;
}