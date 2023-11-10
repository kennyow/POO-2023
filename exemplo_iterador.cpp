#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


void limpaTerminal(){
    system("CLS");
}

int main(void){

    limpaTerminal();

    vector <int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = numeros.begin(); it != numeros.end(); ++it){
        cout << *it << " ";
    }
    cout <<  endl;
    cout << "----------" <<  endl;

    vector<int>::iterator _it = numeros.end(); //Joga para o final

    numeros.insert(_it, 11); //Inserir o número 11

    _it = numeros.begin(); // Joga para o começo

    numeros.insert(_it, 0); // Inserir o zero

    for (auto it = numeros.begin(); it != numeros.end(); ++it){
        cout << *it << " ";
    }
    cout <<  endl;
    cout << "----------" <<  endl;

    numeros.erase(_it); //Apaga o zero

    _it = numeros.end() -1; //Se desloca para o último
    numeros.erase(_it); // iterador apaga o último (o 11)

    for (vector<int>::const_iterator it = numeros.begin(); it != numeros.end(); ++it){
        cout << *it << " ";
    }
    cout <<  endl;
    cout << "----------" <<  endl;

        for (vector<int>::reverse_iterator rit = numeros.rbegin(); rit != numeros.rend(); ++rit){
            cout << *rit << " ";
    }
    cout <<  endl;
    cout << "----------" <<  endl;
    return 0;
}