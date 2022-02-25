#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include <vector>
#include <string>
#include "Proprietario.h"
#include "Veiculo.h"

using namespace std;

class Carro : public Veiculo
{
private:
	int numPortas;
	int capacidadePortaMalas;
	string nome1;
	string nome2;
	int qtd_proprietarioc2;

public:
	Carro();
	Carro(string nome1, string nome2, int numPortas, int capacidadePortaMalas, int qtd_proprietarioc2, string motorizacao, int capacidadeTanque, string combustivel);

	// Gets
	int getNumPortas();
	string getNome1();
	string getNome2();
	int getCapacidadePortaMalas();
	int getQtdProprietarioC2();

	// Sets
	void setNumPortas(int numPortas);
	Proprietario setNome1(string nome1, Proprietario p);
	Proprietario setNome2(string nome2, Proprietario p);
	void setCapacidadePortaMalas(int capacidadePortaMalas);
	void setQtdProprietarioC2(int qtd_proprietarioc2);

	// Metodos
	Proprietario CadastrarQtdProprietario(Proprietario p);

};
#endif