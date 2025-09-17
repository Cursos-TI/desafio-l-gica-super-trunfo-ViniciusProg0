#include <stdio.h>

int main (){
    //Declarando as variaveis 
    char estado[]= "Sp", estado2[]= "Rj";    
    char codigo[]= "A01", codigo2[]= "B02";
    char cidade[]= "São Paulo", cidade2[]= "Rio de Janeiro";
    
    unsigned long int populacao = 12325000, populacao2 = 6748000;
    double area = 1521.11, area2 = 1200.25;
    double pib = 699.28, pib2 = 300.50;
    int pontos_turisticos = 50, pontos_turisticos2 = 30;
    
    double Densidade_Populacional, Densidade_Populacional2;
    double PIB_per_Capita, PIB_per_Capita2;
    float Super_poder, Super_poder2;
    


 
//Calculo: Carta1 //
Densidade_Populacional = (double) populacao / area;
PIB_per_Capita = (double) pib / populacao;

//Calculo Super poder: Carta 1

Super_poder = (float) populacao + area + pib + pontos_turisticos;



//A forma que o sistema vai repassar assim que o usuario inserir os dados//
 printf("\n--- CARTA1: (Local 1) ---\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %lu\n", populacao);
printf("Area: %lf\n", area);
printf("Pib: %lf\n", pib);
printf("Pontos turisticos: %d\n",pontos_turisticos);
printf("Densidade Populacional: %lf\n", Densidade_Populacional);
printf("PIB per Capita: %lf\n", PIB_per_Capita);
printf("Super Poder: %f\n", Super_poder);




// Calculo: CARTA 2 //
    Densidade_Populacional2 = (double) populacao2 / area2;
    PIB_per_Capita2 = (double) pib2 / populacao2;

// Calculo Super poder: Carta 2

Super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2;



// Adicionado os printf para o segundo conjunto de dados.
    printf("\n--- CARTA2: (Local 2) ---\n");
    printf("Estado2: %s\n", estado2);
    printf("Codigo2: %s\n", codigo2);
    printf("Cidade2: %s\n", cidade2);
    printf("Populacao2: %lu\n", populacao2);
    printf("Area2: %lf\n", area2);
    printf("Pib2: %lf\n", pib2);
    printf("Pontos turisticos2: %d\n",pontos_turisticos2);
    printf("Densidade Populacional2: %lf\n", Densidade_Populacional2);
    printf("PIB per Capita2: %lf\n", PIB_per_Capita2);
    printf("Super Poder 2: %f\n", Super_poder2);


// Comando para ver os resultados
int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8;
 
// somas de comparaçoes

 resultado1 = estado > estado2;
 resultado2 = populacao > populacao2;
 resultado3 = area > area2;
 resultado4 = pib > pib2;
 resultado5 = pontos_turisticos > pontos_turisticos2;
 resultado6 = Densidade_Populacional < Densidade_Populacional2;
 resultado7 = PIB_per_Capita > PIB_per_Capita2;
 resultado8 = Super_poder > Super_poder2;


 // Imprimindo os resultados na tela
// Resultados das comparaçoes entre as duas cartas com if e else 
  if(estado > estado2){
    printf("Carta 1 (São Paulo) venceu!\n");
  }else {
    printf("Carta 2 (Rio de janeiro) venceu!\n");
  }
    

  if(populacao > populacao2){
    printf("Carta 1 (São Paulo) venceu!\n");
  }else {
    printf("Carta 2 (Rio de janeiro) venceu!\n");
  }





return 0;

}
