#include <stdio.h>

    int main(){

        int populacaocarta_1;
        int numerodepontosturisticoscarta_1;
        int populacaocarta_2;
        int numerodepontosturisticoscarta_2;

        float areacarta_1;
        float pibcarta_1;
        float areacarta_2;
        float pibcarta_2;
        float densidadepopulacionalcarta_1;
        float densidadepopulacionalcarta_2;
        float pibpercapitacarta_1;
        float pibpercapitacarta_2;

        char estadocarta_1[20];
        char nomedacidadecarta_1[50];
        char codigodacarta_1[10];
        char estadocarta_2[20];
        char nomedacidadecarta_2[50];
        char codigodacarta_2[10];

                 
        //Criação da carta 01

        printf("--- Super Trunfo ---\n\n");
        printf ("Carta 01 \n\n");

        printf("Estado: ");
        scanf("%s", &estadocarta_1);

        printf("Código da Carta: ");
        scanf("%s", &codigodacarta_1);

        printf("Nome da Cidade: ");
        scanf("%s", &nomedacidadecarta_1);

        printf("População: ");
        scanf("%d", &populacaocarta_1);

        printf("Área Total: ");
        scanf("%f", &areacarta_1);

        printf("PIB da Cidade: ");
        scanf("%f", &pibcarta_1);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &numerodepontosturisticoscarta_1);

      
        //Criação da Carta 02

        printf ("\n\nCarta 02\n\n");

        printf("Estado: ");
        scanf("%s", &estadocarta_2);

        printf("Código da Carta: ");
        scanf("%s", &codigodacarta_2);

        printf("Nome da Cidade: ");
        scanf("%s", &nomedacidadecarta_2);

        printf("População: ");
        scanf("%d", &populacaocarta_2);

        printf("Área Total: ");
        scanf("%f", &areacarta_2);

        printf("PIB da Cidade: ");
        scanf("%f", &pibcarta_2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &numerodepontosturisticoscarta_2);

        

        //Impressão dos dados Carta 01

        printf("\n");
        printf("Estado: %s\n", estadocarta_1);
        printf("Código da Carta: %s\n", codigodacarta_1);
        printf("Nome da Cidade: %s\n", nomedacidadecarta_1);
        printf("População da Cidade: %d Mil\n", populacaocarta_1);
        printf("Área Total: %.2f km²\n", areacarta_1);
        printf("PIB da Cidade: %.2f bilhões\n", pibcarta_1);
        printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticoscarta_1);

        densidadepopulacionalcarta_1 = (float)(populacaocarta_1 / areacarta_1);
        pibpercapitacarta_1 = (float)(pibcarta_1 / populacaocarta_1);

        printf("Densidade Populacional: %.2f hab. Km²\n", densidadepopulacionalcarta_1);
        printf("Pib Percapita: %.2f Reais\n", pibpercapitacarta_1);

        //Impressão de dados Carta 02

        printf("\n");
        printf("Estado: %s\n", estadocarta_2);
        printf("Código da Carta: %s\n", codigodacarta_2);
        printf("Nome da Cidade: %s\n", nomedacidadecarta_2);
        printf("População da Cidade: %d Mil\n", populacaocarta_2);
        printf("Área Total: %.2f Km²\n", areacarta_2);
        printf("Pib da Cidade: %.2f Bilhões\n", pibcarta_2);
        printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticoscarta_2);

        densidadepopulacionalcarta_2 = (float)(populacaocarta_2 / areacarta_2);
        pibpercapitacarta_2 = (float)(pibcarta_2 / populacaocarta_2);
        
        printf("Densidade Populacional: %.2f hab.Km²\n", densidadepopulacionalcarta_2);
        printf("Pib Percapita: %.2f Reais\n", pibpercapitacarta_2);

        printf("\n");
        printf("--- Compração das Cartas ---\n");

        printf("Carta 1 - %s (%s): %f km²\n", nomedacidadecarta_1, estadocarta_1, areacarta_1);

        printf("Carta 2 - %s (%s): %f Km²\n", nomedacidadecarta_2, estadocarta_2, areacarta_2);

        printf("\n");
        printf("--- Resultado ---\n");
        

        if (areacarta_1 > areacarta_2)
           
        {   printf("Carta 1 (%s) venceu!", nomedacidadecarta_1);
                                
        } else {
            printf("Carta 2 (%s) venceu!", nomedacidadecarta_2);
        }
        


        return 0;

        
    }