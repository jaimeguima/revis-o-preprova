#include <iostream>
#include <string>
#include <vector>

class Veiculo {
protected:
    std::string marca;
    std::string modelo;
    int capacidade; // Capacidade de carga em toneladas
public:
    Veiculo(const std::string& marca, const std::string& modelo, int capacidade)
        : marca(marca), modelo(modelo), capacidade(capacidade) {}
    virtual void exibirDados() const {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Capacidade: " << capacidade << " toneladas\n";
    }
};

class Caminhao : public Veiculo {
private:
    int eixos;
public:
    Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos)
        : Veiculo(marca, modelo, capacidade), eixos(eixos) {}
    void exibirDados() const override {
        std::cout << "Caminhão - ";
        Veiculo::exibirDados();
        std::cout << "Eixos: " << eixos << "\n";
    }
};

class Van : public Veiculo {
private:
    int passageiros;
public:
    Van(const std::string& marca, const std::string& modelo, int capacidade, int passageiros)
        : Veiculo(marca, modelo, capacidade), passageiros(passageiros) {}
    void exibirDados() const override {
        std::cout << "Van - ";
        Veiculo::exibirDados();
        std::cout << "Passageiros: " << passageiros << "\n";
    }
};

int main() {
    std::vector<Veiculo*> veiculos;

    Veiculo* caminhao_grande = new Caminhao("RODOTREM", "CITROEM", 60, 3);
    Veiculo* van_grande = new Van("ESCOLAR", "WOLKSVAGEN", 40, 6);
    Veiculo* caminhao_pequeno = new Caminhao("SCANIA", "HONDA", 20, 3);
    Veiculo* van_pequena = new Van("KOMBI", "WOLKSVAGEN", 10, 6);
    
    veiculos.push_back(caminhao_grande);
    veiculos.push_back(van_grande);
    veiculos.push_back(caminhao_pequeno);
    veiculos.push_back(van_pequena);
    
    for (auto carro : veiculos) {
        carro->exibirDados();
    }

    // Liberar a memória alocada
    for (auto carro : veiculos) {
        delete carro;
    }

    return 0;
}
