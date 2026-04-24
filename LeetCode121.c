#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    int compra = prices[0];
    int lucro_dia = 0;
    int lucro_max = 0;

    for(int i = 1; i < pricesSize;i++){
        if(compra > prices[i]){
            compra = prices[i];
        }

        lucro_dia = prices[i] - compra;

        if(lucro_dia > lucro_max){
            lucro_max = lucro_dia;
        }

        printf("Lucro dia: %d",lucro_dia);
        printf("\nLucro max: %d",lucro_max);
    }

    
}

int main(){
    int precos[6] = {7,1,5,3,6,4};
    int tamanho = 6;
    int lucro = 0;

    lucro = maxProfit(precos,tamanho);
    printf("\nLUCRO:%d",lucro);

}