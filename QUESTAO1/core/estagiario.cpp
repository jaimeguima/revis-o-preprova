#include "estagiario.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

estagiario :: estagiario(string nome, int id) : Funcionario(nome, id){
    reduzir_salario(SalarioBase);
}

int estagiario :: reduzir_salario(double SalarioBase){
    int novo_salario = (SalarioBase / 2); 
    this->SalarioBase = novo_salario;
    return 1;
}

void estagiario :: CalcularSalariototal_estagiario() {
    cout << SalarioBase  << endl;
}