#include <stdio.h>

int main(){

    int vendas1,vendas2;
    char nome [20];


printf("Qual seu nome?:");
 scanf("%[^\n]s",&nome);
  printf("nome:%s\n",nome);
printf("\n");
    printf("Quantos produtos voce vendeu?:");
     scanf("%d",&vendas1);
      printf("vendas:%d\n",vendas1);
printf("\n");
    printf("Resultado");
     printf("nome:%s\nVendas:%d\n", nome ,vendas1);
     
printf("\n");

printf("Qual seu nome?:");
 scanf(" %[^\n]s",&nome);
  printf("nome: %s\n",nome);
printf("\n");
    printf("Quantos produtos voce vendeu?:");
     scanf("%d",&vendas2);
      printf("vendas:%d\n",vendas2);
printf("\n");
    printf("Resultado");
     printf("nome:%s\nVendas:%d\n", nome ,vendas2);

/* if para saber se alguma coisa é ( >Maior ) ( menor< ) (igual ==) ou diferente (!=),
depois do if tem o else para fazer comparação de 2 fatores */

if(vendas1 >= vendas2){printf("A primeira venda é maior");}     
else{printf("A segunda venda é maior!");}

printf("\n");







return 0;

}