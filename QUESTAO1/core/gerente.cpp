#include "gerente.hpp"
#include <iostream>

using std::cout;
using std::endl;

Gerente :: Gerente(string nome, int id): Funcionario(nome, id){
      this->teste = 12000;
}


double Gerente :: CalcularSalariototal_gerente(){
    
      cout << SalarioBase + (teste/12) << endl;
      return 1;
}