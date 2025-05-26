#include <stdio.h>

    int main(){

        //Primeiro, inserir as variáveis de entrada das duas cartas:

        int pontosturisticos1, populacao1;
        char estado1[3], cidade1[50], codigo1[50];
        float area1, PIB_reais1, PIB_bilhoes1, densidade1, percapita1, superpoder1;

        int pontosturisticos2, populacao2;
        char estado2[3], cidade2[50], codigo2[50];
        float area2, PIB_reais2, PIB_bilhoes2, densidade2, percapita2, superpoder2;

        //Agora vou inserir as váriaveis dos resultados de comparação:

        int resultadopopulacao, resultadoarea, resultadopib, resultadoturisticos, resultadodensidade, resultadopercapita, resultadosuperpoder;

        //Agora vou escrever as entradas dos dados das cartas:

        //primeira carta

        printf("Digite o código da primeira carta:\n");
        scanf("%s", codigo1);
        
        printf("Digite o Estado da primeira carta:\n");
        scanf(" %c", &estado1);

        printf("Digite o nome da cidade da primeira carta:\n");
        scanf("%s", cidade1);

        printf("Digite a População da primeira carta:\n");
        scanf("%f", &populacao1);

        printf("Digite a área da primeira carta:\n");
        scanf("%f", &area1);

        printf("Digite o PIB da primeira carta:\n");
        scanf("%f", &PIB_bilhoes1);

        printf("Digite o número de pontos turísticos da primeira carta:\n");
        scanf("%d", &pontosturisticos1);

        //segunda carta
    
        printf("Digite o código da segunda carta:\n");
        scanf("%s", codigo2);
        
        printf("Digite o Estado da segunda carta:\n");
        scanf(" %c", &estado2);

        printf("Digite o nome da cidade da segunda carta:\n");
        scanf("%s", cidade2);

        printf("Digite a População da segunda carta:\n");
        scanf("%f", &populacao2);

        printf("Digite a área da segunda carta:\n");
        scanf("%f", &area2);

        printf("Digite o PIB da segunda carta:\n");
        scanf("%f", &PIB_bilhoes2);

        printf("Digite o número de pontos turísticos da segunda carta:\n");
        scanf("%d", &pontosturisticos2);

        //Aqui vou colocar os cálculos do pib percapita, super poder e densidade

        //calculo das densidades
        
        densidade1 = populacao1 / area1;

        densidade2 = populacao2 / area2;
        
        //Cáluco dos pib percapitas
        
        PIB_reais1 = PIB_bilhoes1 * 1000000000;
        percapita1 = PIB_reais1 / populacao1;
        
        PIB_reais2 = PIB_bilhoes2 * 1000000000;
        percapita2 = PIB_reais2 / populacao2;


        //Cálculo dos super poderes

        superpoder1 = populacao1 + area1 + PIB_bilhoes1 + pontosturisticos1 + percapita1 + (1/densidade1);

        superpoder2 = populacao2 + area2 + PIB_bilhoes2 + pontosturisticos2 + percapita2 + (1/densidade2);

        //Agora vou inserir as comparações

        resultadopopulacao = populacao1 > populacao2;
        resultadoarea = area1 > area2;
        resultadopib = PIB_bilhoes1 > PIB_bilhoes2;
        resultadoturisticos = pontosturisticos1 > pontosturisticos2;
        resultadodensidade = (1/densidade1) < (1/densidade2);
        resultadopercapita = percapita1 > percapita2;
        resultadosuperpoder = superpoder1 > superpoder2;


        //Agora vou inserir os resultado de saída:

        printf("População: Carta 1 venceu (%d)\n", resultadopopulacao);
        printf("Área: Carta 1 venceu (%d)\n", resultadoarea);
        printf("PIB: Carta 1 venceu (%d)\n", resultadopib);
        printf("Pontos turísticos: Carta 1 venceu (%d)\n", resultadoturisticos);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadodensidade);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadopercapita);
        printf("Super Poder: Carta 1 venceu (%d)\n", resultadosuperpoder);


        return 0;










    }