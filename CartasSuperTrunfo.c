#include <stdio.h>

int main () {
        char estado1; //Uma letra de 'A' a 'H' (representando um dos oito estados).
        char cidade1[50]; //O nome da cidade.
        char codigo1 [4]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
        int populacao1; //O número de habitantes da cidade.
        float area1; // A área da cidade em quilômetros quadrados.
        float pib1; //O Produto Interno Bruto da cidade.
        int pontos_turisticos1; //A quantidade de pontos turísticos na cidade.
 
// Entrada de dados para a Carta 1.

printf ("Digite a letra do estado:");
scanf (" %c", &estado1);

printf("Digite o nome da cidade:");
scanf( "%s", cidade1);

printf ("Digite o código da carta:"); 
scanf (" %s", codigo1);

printf("Digite a população da cidade:");
scanf (" %d", &populacao1);

printf ("Digite a área da cidade:");
scanf (" %f", &area1) ;

printf ("Digite o PIB da cidade:");
scanf (" %f", &pib1);

printf("Digite o número de pontos turísticos:");
scanf (" %d", &pontos_turisticos1);

// Exibindo as informações da carta 1.
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n",populacao1);
    printf("Área: %f km²\n",area1);
    printf("PIB: %f\n",pib1);
    printf("Pontos Turísticos: %d\n",pontos_turisticos1);




    char estado2; //Uma letra de 'A' a 'H' (representando um dos oito estados).
        char cidade2[40]; //O nome da cidade.
        char codigo2 [40]; //A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
        int populacao2; //O número de habitantes da cidade.
        float area2; // A área da cidade em quilômetros quadrados.
        float pib2; //O Produto Interno Bruto da cidade.
        int pontos_turisticos2; //A quantidade de pontos turísticos na cidade.
 
// Entrada de dados para a Carta 2.

printf ("Digite a letra do estado:");
scanf (" %c", &estado2);

printf("Digite o nome da cidade:");
scanf( "%s", cidade2);

printf ("Digite o código da carta:"); 
scanf (" %s", codigo2);

printf("Digite a população da cidade:");
scanf (" %d", &populacao2);

printf ("Digite a área da cidade:");
scanf (" %f", &area2) ;

printf ("Digite o PIB da cidade:");
scanf (" %f", &pib2);

printf("Digite o número de pontos turísticos:");
scanf (" %d", &pontos_turisticos2);

// Exibindo as informações da carta 2.
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %f km²\n",area2);
    printf("PIB: %f\n",pib2);
    printf("Pontos Turísticos: %d\n",pontos_turisticos2);


    

return 0;


}