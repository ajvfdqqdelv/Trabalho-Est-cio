#include <stdio.h>

int main (){
//declaracao das cartas

char estado; 
char codigo [20];
char nomedacidade [50];
int populacao;
float areaemkm, pib;
int turisticos;
float densidadepopulacional;
float pibpercapita;

//informacoes fornecidas

printf("Digite o estado a seguir:");
scanf(" %c", &estado);

printf("Digite o codigo da sua primeira carta:");
scanf(" %s", &codigo);

printf("Digite a populacao da sua primeira carta:");
scanf(" %d", &populacao);

printf("Digite a area da sua primeira carta:");
scanf(" %f", &areaemkm);

printf("Digite o PIB da sua primeira carta");
scanf(" %f", &pib);

printf("Digite os pontos turisticos da sua primeira carta");
scanf(" %d", &turisticos);

//calculo da densidade populacional

densidadepopulacional = (float)populacao/areaemkm;

//calculo do pib per capita

pibpercapita = (float)(pib/populacao)*1000000000;


printf("Dados da Primeira Carta\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade : %s\n", nomedacidade);
printf("Populacao: %d\n", populacao);
printf("area : %.2f km²\n", areaemkm);
printf("PIB : %.2f bilhões de reais\n", pib);
printf("Pontos turisticos : %d\n", turisticos);
printf("Densidade populacional : %.2f hab/km²\n",densidadepopulacional);
printf("Pib per capita : %.2f reais\n", pibpercapita);



//declaracao das cartas 

char estado2;
char codigo2 [20];
char nomedacidade2 [50];
int populacao2;
float areaemkm2, pib2;
int turisticos2;
float densidadepopulacional2;
float pibpercapita2;

//infomacoes fornecidas

printf("Digite o estado a seguir:  ");
scanf(" %c", &estado2);


printf("Digite o c�digo da sua segunda carta:  ");
scanf(" %s", &codigo2);


printf("Digite o nome da sua segunda carta:  ");
scanf(" %s", nomedacidade2);


printf("Digite a popula��o da sua segunda carta seguir:  ");
scanf(" %d", &populacao2);


printf("Digite a �rea da sua segunda carta a seguir:  ");
scanf(" %f", &areaemkm2);


printf("Digite o PIB da sua segunda carta a seguir:  ");
scanf(" %f", &pib2);


printf("Digite os pontos tur�ticos da sua segunda carta a seguir:  ");
scanf(" %d", &turisticos2);


//calculo da densidade populacional 

densidadepopulacional2 = (float) populacao2 / areaemkm2;

//calculo do pib per capita

pibpercapita2 = (float) ( pib2 / populacao2 ) * 1000000000;


printf("Dados da Segunda Carta\n");
printf("Estado: %c\n", estado2);
printf("C�digo: %s\n", codigo2);
printf("Nome da cidade : %s\n", nomedacidade2);
printf("Popula��o: %d\n", populacao2);
printf("�rea : %.2f km�\n", areaemkm2);
printf("PIB : %.2f bilh�es de reais\n", pib2);
printf("Pontos tur�sticos : %d\n", turisticos2);
printf("Densidade populacional : %.2f hab/km�\n", densidadepopulacional2);
printf("Pib per capita : %.2f reais\n", pibpercapita2);


//compara��o de carta com uso de IF or Else
if(turisticos > turisticos2){
    printf("A carta 1 tem mais pontos tur�sticos que a carta 2\n");
}else{
    printf("A carta 2 tem mais pontos tur�sticos que a carta 1\n");
}

if(pib > pib2){
    printf("A carta 1 tem maior PIB que a carta 2\n");
}else{
    printf("A carta 2 tem maiorr PIB que a carta 1\n ");
}

if(areaemkm > areaemkm2){
    printf("A carta 1 tem maior popula��o ue a carta 2\n");
}else{
    printf("A carta 2 tem maior popula��o que a carta 1\n");
}

if(populacao > populacao2){
    printf("A carta 1 tem maior popula��o que a carta 2\n");
}else{
    printf("A carta 2 tem maior popula��o que a carta 1\n");
}

if(densidadepopulacional > densidadepopulacional2){
    printf("Carta 2 perdeu em densidade populacional\n");
}else{
    printf("Carta 1 venceu em densidade populacional\n");
}
}










