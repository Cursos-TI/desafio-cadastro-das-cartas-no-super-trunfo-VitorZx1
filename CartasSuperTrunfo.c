#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[20];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    struct Carta cartas[2];

    printf("Cadastro da carta 1 (Cidade São Paulo - A01):\n");
    strcpy(cartas[0].estado, "São Paulo");
    strcpy(cartas[0].cidade, "São Paulo");
    cartas[0].populacao = 12400000;
    cartas[0].area = 1521.0;
    cartas[0].pib = 800000.0;
    cartas[0].pontosTuristicos = 50;

    printf("\nCadastro da carta 2 (Cidade Rio de Janeiro - B01):\n");
    strcpy(cartas[1].estado, "Rio de Janeiro");
    strcpy(cartas[1].cidade, "Rio de Janeiro");
    cartas[1].populacao = 6700000;
    cartas[1].area = 1255.0;
    cartas[1].pib = 400000.0;
    cartas[1].pontosTuristicos = 60;

    printf("\nDados cadastrados:\n");

    for (int i = 0; i < 2; i++) {
        printf("\nEstado: %s\n", cartas[i].estado);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: R$ %.2f bilhões\n", cartas[i].pib);
        printf("Número de pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}