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

float getValor(CartaCidade c, int atributo) {
    switch (atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontosTuristicos;
        default: return -1;
    }
}

int main() {
    CartaCidade carta1, carta2;
    int attr1, attr2;

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
    printf("Escolha o primeiro atributo para comparar: ");
    scanf("%d", &attr1);
    printf("Escolha o segundo atributo para comparar: ");
    scanf("%d", &attr2);

    float valor1a = getValor(carta1, attr1);
    float valor2a = getValor(carta2, attr1);
    float valor1b = getValor(carta1, attr2);
    float valor2b = getValor(carta2, attr2);

    int resultado1 = (valor1a > valor2a) ? 1 : (valor1a < valor2a) ? 2 : 0;
    int resultado2 = (valor1b > valor2b) ? 1 : (valor1b < valor2b) ? 2 : 0;

    printf("\nResultado das comparações:\n");
    if (resultado1 == resultado2 && resultado1 != 0) {
        printf("A carta vencedora é: %s\n", resultado1 == 1 ? carta1.nome : carta2.nome);
    } else if (resultado1 == 0 && resultado2 == 0) {
        printf("Empate duplo!\n");
    } else if (resultado1 != 0 && resultado2 == 0) {
        printf("A carta vencedora é: %s (pelo primeiro atributo)\n", resultado1 == 1 ? carta1.nome : carta2.nome);
    } else if (resultado2 != 0 && resultado1 == 0) {
        printf("A carta vencedora é: %s (pelo segundo atributo)\n", resultado2 == 1 ? carta1.nome : carta2.nome);
    } else {
        printf("Cada carta venceu em um atributo! Empate técnico!\n");
    }

    return 0;
}