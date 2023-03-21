#include <stdio.h>
#include <stdlib.h>

int main(){
   float alchol,gasolina,litrosAr=10,litrosGr=14,litrosAc=8,litrosGc=11.4,kmr,kmc;
   float result_of,result1,result2,result3,result4;
    printf("Preencha usando Ponto(.) inves de virgula\n\n");
    printf("Preco do alchol:R$");
    scanf("%f",&alchol);
     printf("Preco do gasolina:R$");
    scanf("%f",&gasolina);

   result_of = alchol/gasolina;

 if(result_of<=0.72) {
   printf("\nCOMPENSA MAIS COLOCAR ALCOOL A:R$%.2f\n\n",alchol);
 }else{
    printf("\nCOMPENSA MAIS COLOCAR GASOLINA A:R$%.2f\n\n",gasolina);}

    printf("______________________________________________________\n");
    printf("Quantidade de KM na Rodovia:");
    scanf("%f",&kmr);
result1 = alchol/litrosAr*kmr;
result2 = gasolina/litrosGr*kmr;
printf("\ntotal gastos Alcool: R$%.2f\n",result1);
printf("total de Litros: %.2f\n\n",kmr/litrosAr);
printf("total gastos Gasolina: R$%.2f\n",result2);
printf("total de Litros: %.2f\n",kmr/litrosGr);
 if(result1 < result2) {
   printf("\nCOMPENSA MAIS COLOCAR ALCOOL\n\n");
 }else{
    printf("\nCOMPENSA MAIS COLOCAR GASOLINA\n\n");}
 printf("______________________________________________________\n");
    printf("Quantidade de KM na Cidade:");
    scanf("%f",&kmc);
result3 = alchol/litrosAc*kmc;
result4 = gasolina/litrosGc*kmc;
printf("\ntotal gastos Alcool: R$%.2f\n",result3);
printf("total de Litros: %.2f\n\n",kmc/litrosAc);
printf("total gastos Gasolina: R$%.2f\n",result4);
printf("total de Litros: %.2f\n",kmc/litrosGc);
 if(result3 < result4) {
   printf("\nCOMPENSA MAIS COLOCAR ALCOOL\n\n");
 }else{
    printf("\nCOMPENSA MAIS COLOCAR GASOLINA\n\n");}
printf("______________________________________________________");

 printf("\n\n\n\n\n\n");
    return 0;}
