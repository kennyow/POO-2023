#include <math.h>
#include <stdio.h>


int main(){

    int angulo = 45;

    float res1 = cos(angulo);
    float res2 = sin(angulo);
    float res3 = tan(angulo);

    printf("O cosseno de %d e %f\n",  angulo, res1);
    printf("O seno de %d e %f\n",  angulo, res2);
    printf("Tangente de %d e %f\n",  angulo, res3);

    //Funções Hiperbólicas
    //cosh(), sinh(), tanh()

    //Funções Exponenciais
    //exp(), log(), log10()

    int valor = 42;

    printf("O log de %d e %f\n",  valor, log(valor));
    printf("O log de base 10 de %d e %f\n",  valor, log10(valor));

    //Funções de Potência
    //pow(), sqrt()

    int a = 3;
    int b = 2;
    int c = 9;

    printf("%d elevado a %d e %lf\n",  a, b, pow(a,b));
    printf("A raiz quadrada de %d e %lf\n",  c, sqrt(c));

    //Funções de arredondamento
    //ceil()arredonda para cima, floor()arredonda para baixo, 

    float e = 3.6;
    float f = 4.3;

    printf("Arredondado %.2f para cima fica %lf\n",  e, ceil(e));
    printf("Arredondado %.2f para baixo fica %lf\n",  f, floor(f));



    return 0;
}


#include <iostream>
#include <string>
#include <map>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::map;


struct case{
  int norma;
  float costura;
}

class estudante{
  private:
    string nome;
    int idade;
    string matricula;
    

  public:
    estudante (const string& n, int i, const string& m): nome(n), idade(i), matricula(m) {}
    string& get_nome(){ return nome;}
    int get_idade(){ return idade;}
    string& get_matricula(){ return matricula;}

    void print_info() {
      cout << "Nome: " << get_nome() << endl;
      cout << "Matricula: " << get_matricula() << endl;
      cout << "Idade: " << get_idade() << endl;
    }
};

class banco_de_dados {
  private:
    map<string, estudante*> estudantes;
  public:
    void adicionar_estudante(const string& index, estudante* e){
      estudantes[index] = e;
    }

    void listar_estudantes(){
      for(auto& par: estudantes) {
        cout << "Nome: " << par.second->get_nome() << endl;
        cout << " Index: " << par.first << endl;
        cout << "Matricula: " << par.second->get_matricula() << endl;
        cout <<" Idade: " << par.second->get_idade() << endl;
        cout << endl;
      }
    }

    void remover_estudante(const string& index) { estudantes.erase(index);
}
    estudante* buscar_estudante(const string& index) {
      auto it = estudantes.find(index);
      if (it != estudantes.end()){
        return it->second;
      }
      return nullptr;
    }
    ~banco_de_dados() {
        for (auto& par : estudantes) {
            delete par.second;
        }
    }

};

int main(void){


  banco_de_dados bd;

  string rm_est, sr_st;


  
  bd.adicionar_estudante("ana", new estudante("Ana Silva", 25, "1234"));
  bd.adicionar_estudante("bob", new estudante("Bob Ferreira", 43, "31232"));
  bd.adicionar_estudante("joe", new estudante("Joe Tribbiani", 77, "111111"));



  bd.listar_estudantes();
  



  return 0;
}