#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x) {

int esquerda = 0, direita = x, resposta = -1;

    while(esquerda <= direita){
        long long meio = (esquerda + direita) / 2;
        long long quadrado = meio * meio;

        if(quadrado > x){
            direita = meio - 1;
        }
        else if(quadrado == x){
            return meio;
        }
        else{
            resposta = meio;
            esquerda = meio + 1;
        }
    }
    return resposta;
}

int main(){
    int x = 8, resposta = 0;

    resposta = mySqrt(x);

    printf("RESPOSTA:%d",resposta);
}