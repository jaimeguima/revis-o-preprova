#ifndef FUNCIONARIO_REGULAR_HPP
#define FUNCIONARIO_REGULAR_HPP

#include <string>
#include "funcionario.hpp"

using std::string;

class FuncionarioRegular : public Funcionario
{
public:
    FuncionarioRegular(string nome, int id);
    void CalcularSalariototal_regular();
};

#endif // FUNCIONARIO_REGULAR_HPP
