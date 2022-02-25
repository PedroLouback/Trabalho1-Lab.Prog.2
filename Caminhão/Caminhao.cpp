#include "Caminhao.h"
#include <iostream>
#include <vector>
#include <string>

Caminhao::Caminhao()
{
}

Caminhao::Caminhao(float cargaSuportada, int numEixos, string nome1, string nome2, int qtd_proprietarioc1, string motorizacao, int capacidadeTanque, string combustivel) : Veiculo(motorizacao, capacidadeTanque, combustivel)
{
    this->cargaSuportada = cargaSuportada;
    this->numEixos = numEixos;
    this->qtd_proprietarioc1 = qtd_proprietarioc1;
    this->nome1 = nome1;
    this->nome2 = nome2;
}

// Gets
float Caminhao::getCargaSuportada()
{
    return cargaSuportada;
}
int Caminhao::getNumEixos()
{
    return numEixos;
}
int Caminhao::getQtdProprietarioC1()
{
    return qtd_proprietarioc1;
}
string Caminhao::getNome1()
{
    return nome1;
}
string Caminhao::getNome2()
{
    return nome2;
}

// Sets
Proprietario Caminhao::setNome1(string nome1, Proprietario p)
{
    this->nome1 = nome1;
    return p;
}
Proprietario Caminhao::setNome2(string nome2, Proprietario p)
{
    this->nome2 = nome2;
    return p;
}
void Caminhao::setCargaSuportada(float cargaSuportada)
{
    this->cargaSuportada = cargaSuportada;
}
void Caminhao::setNumEixos(int numEixos)
{
    this->numEixos = numEixos;
}
void Caminhao::setQtdProprietarioC1(int qtd_proprietarioc1)
{
    this->qtd_proprietarioc1 = qtd_proprietarioc1;
}

// Metodos
Proprietario Caminhao::CadastrarQtdProprietario(Proprietario p)
{
    qtd_proprietarioc1 = p.getQtdProprietario();
    return p;
}
