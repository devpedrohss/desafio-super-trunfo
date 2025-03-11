#include <stdio.h>

    int main(){
        int populacao, turisticos;
        char estado;
        char cidade[50];
        char codigo[50];
        float area, PIB;

        printf("Digite o código da carta:\n");
        scanf("%s", codigo);
        
        printf("Digite o Estado:\n");
        scanf(" %c", &estado);

        printf("Digite o nome da cidade:\n");
        scanf("%s", cidade);

        printf("Digite a População:\n");
        scanf("%d", &populacao);

        printf("Digite a área:\n");
        scanf("%f", &area);

        printf("Digite o PIB:\n");
        scanf("%f", &PIB);

        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &turisticos);


    
        printf("Carta:\n");
        printf("Estado: %c\n", estado);
        printf("Codigo: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Pontos turísticos: %d\n", turisticos);


        return 0;

    }