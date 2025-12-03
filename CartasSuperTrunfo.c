#include <stdio.h>

int main(){
    //titulo do desafio
printf("Desafio Super Trunfo\n");
//cadastro das caratas 1 e 2
int carta1 = 1, pop1 = 12325000, ponto1 = 50;
int carta2 = 2, pop2 = 6748000, ponto2= 30; 
char estado1[50] = "São Paulo", cod1[10] = "A01", cidade1[50] = "São Paulo";
char estado2[50] = "Rio de Janeiro", cod2[10] = "A02", cidade2[50] = "Rio de Janeiro";
float area1 = 1521.11, pib1 = 699.28;
float area2 = 1200.25, pib2 = 300.50;

//imprimindo carta 1 na tela 
printf("Carta: %d\nEstado: %s\n", carta1, estado1);
printf("Código: %s\nNome da Ciadade: %s\n", cod1, cidade1);
printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n", pop1, area1, pib1, ponto1);
printf("\n");

//imprimindo carta 2 na tela 
printf("Carta: %d\nEstado: %s\n", carta2, estado2);
printf("Código: %s\nNome da Ciadade: %s\n", cod2, cidade2);
printf("População: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turisticos: %d\n", pop2, area2, pib2, ponto2);

//fim da programação 
return 0;

}