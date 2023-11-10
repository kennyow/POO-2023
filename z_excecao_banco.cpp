#include <iostream>

using std:: cout;
using std:: endl;
using std:: string;


//!E. CONTA!
class excecao_conta {

private:
    string msg; #provavelmente será usado para armazenar uma mensagem de erro ou informação sobre a exceção.

public: 
    excecao_conta(const string& s): msg(s){} # inicializa o membro de dados msg com o valor passado como argumento.
    string get_msg(){return msg;}
    virtual void print_info() = 0;
    '''Uma função pura virtual é uma função que não 
    tem uma implementação na classe base e deve ser
     implementada nas classes derivadas.
      Isso significa que qualquer classe que herde 
      de excecao_conta deve fornecer uma implementação 
      para a função print_info()'''

};
//! E. SALDO
class excecao_saldo: public excecao_conta{
#excecao saldo  herda todos os membros e métodos públicos e protegidos da classe excecao_conta.
private:
    float excedente;

public:
    excecao_saldo(const string& s, float v): excecao_conta(s), excedente(v){}
    void print_info(){
        cout << "Excecao: Saldo insufuciente!" < endl;
        cout << "Msg: " << get_msg() << endl;
        cout << "Diferenca: " << excedente << endl;
    }

};

//!E. VALOR!

class excecao_valor: public excecao_conta{
    int codigo;

public:
    excecao_valor(const string& s, int c): excecao_conta(s), codigo(c){}
    void print_info(){
        cout << "Excecao: Valor invalido!" << endl;
		cout << "MSG: " << get_msg() << endl;
		cout << "Codigo: " << codigo << endl;
    }
};

class conta_corrente {
    int cpf;
    float saldo;

public:
    conta_corrente(int c, float s): cpf(c), saldo(s){}

    void sacar(float v){
        if (v < 0){
            throw new excecao_valor("VAL", 1);
        }
        if (v <= saldo){
            saldo -= v;
        }else{
            throw new excecao_saldo("INS", (saldo - v));
        }
    }
    


};

