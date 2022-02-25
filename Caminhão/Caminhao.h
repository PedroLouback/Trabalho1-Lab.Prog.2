#ifndef CAMINHAO_H
#define CAMINHAO_H
#include <iostream>
#include <vector>
#include <string>
#include "Veiculo.h"
#include "Proprietario.h"

using namespace std;

class Caminhao : public Veiculo
{
private:
	string nome1;
	string nome2;
	float cargaSuportada;
	int numEixos;
	int qtd_proprietarioc1;

public:
	Caminhao();
	Caminhao(float cargaSuportada, int numEixos, string nome1, string nome2, int qtd_proprietarioc1, string motorizacao, int capacidadeTanque, string combustivel);

	// Gets
	float getCargaSuportada();
	string getNome1();
	string getNome2();
	int getNumEixos();
	int getQtdProprietarioC1();

	// Sets
	void setCargaSuportada(float cargaSuportada);
	void setNumEixos(int numEixos);
	Proprietario setNome1(string nome1, Proprietario p);
	Proprietario setNome2(string nome2, Proprietario p);
	void setQtdProprietarioC1(int qtd_proprietarioc1);

	// Metodos
	Proprietario CadastrarQtdProprietario(Proprietario p);
};
#endif