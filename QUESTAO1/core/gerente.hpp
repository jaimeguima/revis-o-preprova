#ifndef GERENTE
#define GERENTE

#include "estagiario.hpp"
#include <string>

using std::string;

class Gerente : public Funcionario
{
    private:
        double teste;
    
    public:
        Gerente(string nome, int id);
        double CalcularSalariototal_gerente();
};

#endif