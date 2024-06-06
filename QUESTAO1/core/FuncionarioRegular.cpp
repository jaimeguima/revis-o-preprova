#include <iostream>
#include <string>
#include "FuncionarioRegular.hpp"

using std::string;
using std::cout;
using std::endl;

// Construtor
FuncionarioRegular::FuncionarioRegular(string nome, int id) : Funcionario(nome, id) {
}

// Método para calcular o salário total
void FuncionarioRegular::CalcularSalariototal_regular() {
    cout << SalarioBase << endl;
}
