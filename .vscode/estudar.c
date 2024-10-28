#include <stdio.h>

int main(){

    int vendas;
    char nome [20];


printf("Qual seu nome?:");
scanf("%[^\n]s",&nome);
printf("nome:%s\n",nome);

printf("Quantos produtos voce vendeu?:");
scanf("%d",&vendas);
printf("vendas:%d\n",vendas);
printf("\n")
printf("Resultado");
printf("nome:%s\nVendas:%d\n", nome ,vendas);

printf("\n");









return 0;

}