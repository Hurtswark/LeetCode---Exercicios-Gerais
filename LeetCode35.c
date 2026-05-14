#include <stdio.h>
#include <stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {

    for(int i = 0; i < numsSize;i++){
        if(nums[i] >= target){
            return i;
        }
    }

    return numsSize;
}

int main(){
    int vetor[] = {1,3,5,6};
    int tamanho = 4;
    int alvo = 2;
    int resultado;
    resultado = searchInsert(vetor,tamanho,alvo);
    printf("O resultado é: %d", resultado);
}