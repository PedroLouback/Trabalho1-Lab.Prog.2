#include "Carro.h"
#include <iostream>
#include <vector>
#include <string>

Carro::Carro()
{
}

Carro::Carro(string nome1, string nome2, int numPortas, int capacidadePortaMalas, int qtd_proprietarioc2, string motorizacao, int capacidadeTanque, string combustivel) : Veiculo(motorizacao, capacidadeTanque, combustivel)
{
    this->nome1 = nome1;
    this->nome2 = nome2;
    this->capacidadePortaMalas = capacidadePortaMalas;
    this->qtd_proprietarioc2 = qtd_proprietarioc2;
}

// Gets
int Carro::getNumPortas()
{
    return numPortas;
}
int Carro::getCapacidadePortaMalas()
{
    return capacidadePortaMalas;
}
int Carro::getQtdProprietarioC2()
{
    return qtd_proprietarioc2;
}
string Carro::getNome1()
{
    return nome1;
}
string Carro::getNome2()
{
    return nome2;
}

// Sets
Proprietario Carro::setNome1(string nome1, Proprietario p)
{
    this->nome1 = nome1;
    return p;
}
Proprietario Carro::setNome2(string nome2, Proprietario p)
{
    this->nome2 = nome2;
    return p;
}
void Carro::setNumPortas(int numPortas)
{
    this->numPortas = numPortas;
}
void Carro::setCapacidadePortaMalas(int capacidadePortaMalas)
{
    this->capacidadePortaMalas = capacidadePortaMalas;
}
void Carro::setQtdProprietarioC2(int qtd_proprietarioc2)
{
    this->qtd_proprietarioc2 = qtd_proprietarioc2;
}


// Metodos
Proprietario Carro::CadastrarQtdProprietario(Proprietario p)
{
    qtd_proprietarioc2 = p.getQtdProprietario();
    return p;
}

