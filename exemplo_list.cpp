#include <iostream>
#include <vector>
#include <string>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::ostream;


void limpaTerminal(){
    system("CLS");
}

class coisa {
    int atributo;

public:
    coisa(int a = 0){
        atributo = a;
    }
    friend ostream& operator <<(ostream& out, cost coisa& c){
        
    }


};