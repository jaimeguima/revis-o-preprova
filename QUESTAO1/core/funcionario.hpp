#ifndef FUNC
#define FUNC
#include <string>
using std::string;

class Funcionario
{
    public:
        string nome;
        int id;
        double SalarioBase = 3000;
    
    public:
        Funcionario(string nome, int id);
};

#endif