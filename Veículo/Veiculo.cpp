#include "Veiculo.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Veiculo::Veiculo()
{
}

Veiculo::Veiculo(string motorizacao, int capacidadeTanque, string combustivel)
{
    this->motorizacao = motorizacao;
    this->capacidadeTanque = capacidadeTanque;
    this->combustivel = combustivel;
}

// Gets
string Veiculo::getMotorizacao()
{
    return motorizacao;
}
int Veiculo::getCapacidadeTanque()
{
    return capacidadeTanque;
}
string Veiculo::getCombustivel()
{
    return combustivel;
}

// Sets
void Veiculo::setMotorizacao(string motorizacao)
{
    this->motorizacao = motorizacao;
}
void Veiculo::setCombustivel(string combustivel)
{
    this->combustivel = combustivel;
}
void Veiculo::setCapacidadeTanque(int capacidadeTanque)
{
    this->capacidadeTanque = capacidadeTanque;
}