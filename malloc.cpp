#include <stdio.h>

int main(){

    int numero = 9;
    //Int ocupa 4 bytes de memorias
    printf("A variavel 'numero' vale %d e ocupa %ld bytes em memoria", numero, sizeof(numero));

    return 0;
}