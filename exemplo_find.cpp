#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::find;
using std::string;

int main(void){

    vector <int> numeros = {1, 2, 3, 4, 5, 6, 7,8, 9, 0};
    vector <string> feira = {"bolo", "bolacha", "biscoito", "leite"};

    //*Utilizando o find: procurará no vetor acima o último número na função abaixo.
    auto itera = find(numeros.begin(), numeros.end(), 10);

    //*Utilizando o find: procurará no vetor acima a última string na função abaixo.
    auto maca = find(feira.begin(), feira.end(), "bolacha");

    if (itera != numeros.end()){
        cout << "Valor encontrado: " << *itera << endl;
    }else{
        cout << "Valor nao encontrado!" << endl;
    }

     if (maca != feira.end()){
        cout << "Valor encontrado: " << *maca << endl;
    }else{
        cout << "Valor nao encontrado!" << endl;
    }

    return 0;
}