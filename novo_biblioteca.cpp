#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;

int main(){

    FILE *arq;
    char fruta[10];
    
    //arq = fopen("frutas.txt", "w"); 
    //se o arquivo nao existir ele será criado
    /*se rolar após criado, salvará os novos dados por cima do anterior*/

    arq = fopen("frutas.txt", "a"); 
    /*se rolar após criado, salvará os novos dados abaixo dos demais. A de append*/
    if(arq){
        printf("Informe uma fruta ou zero para sair: \n");
        fgets(fruta, 10, stdin); //stdin = standard input - > entrada padrão (teclado)
        /*a partir do teclado, vai pegar até 10 caracteres que o usuário digitou e
        armazenar em fruta*/
        while(fruta[0] != '0'){
            //saber se na posição zero o usuario digitou zero
            fputs(fruta, arq);
            printf("Informe uma fruta ou zero para sair: \n");
            fgets(fruta, 10, stdin);
        }
    }else{
        cout << "Não foi possivel criar o arquivo" << endl;
    }

    fclose(arq);
    return 0;
}
