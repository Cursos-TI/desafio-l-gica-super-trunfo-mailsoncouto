#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char codigoA[10], codigoB[10];
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;

    // Cadastro das Cartas:
    // Solicitando os dados para a primeira cidade
    printf("Digite o código da cidade A: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade A: ");
    scanf("%s", nomeA);
    printf("Digite a população da cidade A: ");
    scanf("%d", &populacaoA);
    printf("Digite a área da cidade A (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB da cidade A (em milhões): ");
    scanf("%f", &pibA);

    // Solicitando os dados para a segunda cidade
    printf("\nDigite o código da cidade B: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade B: ");
    scanf("%s", nomeB);
    printf("Digite a população da cidade B: ");
    scanf("%d", &populacaoB);
    printf("Digite a área da cidade B (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB da cidade B (em milhões): ");
    scanf("%f", &pibB);

    // Comparação de Cartas:
    printf("\n--- Comparação das Cidades ---\n");

    // Comparando população
    if (populacaoA > populacaoB) {
        printf("Cidade %s tem maior população.\n", nomeA);
    } else if (populacaoA < populacaoB) {
        printf("Cidade %s tem maior população.\n", nomeB);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }

    // Comparando área
    if (areaA > areaB) {
        printf("Cidade %s tem maior área.\n", nomeA);
    } else if (areaA < areaB) {
        printf("Cidade %s tem maior área.\n", nomeB);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }

    // Comparando PIB
    if (pibA > pibB) {
        printf("Cidade %s tem maior PIB.\n", nomeA);
    } else if (pibA < pibB) {
        printf("Cidade %s tem maior PIB.\n", nomeB);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }

    // Determinando a cidade vencedora (com base no número de atributos maiores)
    int pontosA = 0, pontosB = 0;

    if (populacaoA > populacaoB) pontosA++;
    else if (populacaoA < populacaoB) pontosB++;

    if (areaA > areaB) pontosA++;
    else if (areaA < areaB) pontosB++;

    if (pibA > pibB) pontosA++;
    else if (pibA < pibB) pontosB++;

    printf("\n--- Resultado Final ---\n");
    if (pontosA > pontosB) {
        printf("A cidade vencedora é: %s\n", nomeA);
    } else if (pontosB > pontosA) {
        printf("A cidade vencedora é: %s\n", nomeB);
    } else {
        printf("Ambas as cidades estão empatadas.\n");
    }

    return 0;
}
