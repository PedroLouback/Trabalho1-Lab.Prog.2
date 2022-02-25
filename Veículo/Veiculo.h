#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Veiculo
{
private:
	string motorizacao;
	int capacidadeTanque;
	string combustivel;

public:
	Veiculo();
	Veiculo(string motorizacao, int capacidadeTanque, string combustivel);

	// Gets
	string getMotorizacao();
	int getCapacidadeTanque();
	string getCombustivel();

	// Sets
	void setMotorizacao(string nome);
	void setCapacidadeTanque(int capacidadeTanque);
	void setCombustivel(string combustivel);
};
#endif