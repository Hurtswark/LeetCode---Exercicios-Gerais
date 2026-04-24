#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool ehPalindromo(int x){
    if(x < 0){
        return false;
    }
    char str[12];
    sprintf(str,"%d",x);

    int i = 0;
    int j = strlen(str) - 1;

    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;

}

int main(){

    int x = 121;

    bool resultado = ehPalindromo(x);

    if(resultado){
        printf("EH UM PALINDROMO");
    }

    else{
        printf("NÃO EH PALINDROMO");
    }
}