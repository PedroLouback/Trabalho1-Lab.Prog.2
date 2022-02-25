#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include "Proprietario.h"

using namespace std;

Proprietario::Proprietario()
{
}

Proprietario::Proprietario(string nome1, string nome2, int qtd_proprietario)
{
    this->nome1 = nome1;
    this->nome2 = nome2;
    this->qtd_proprietario = qtd_proprietario;
}

// Gets
string Proprietario::getNome1()
{
    return nome1;
}
string Proprietario::getNome2()
{
    return nome2;
}
int Proprietario::getQtdProprietario()
{
    return qtd_proprietario;
}

// Sets
void Proprietario::setNome1(string nome1)
{
    this->nome1 = nome1;
}
void Proprietario::setNome2(string nome2)
{
    this->nome2 = nome2;
}
void Proprietario::setQtdProprietario(int qtd_proprietario)
{
    this->qtd_proprietario = qtd_proprietario;
}