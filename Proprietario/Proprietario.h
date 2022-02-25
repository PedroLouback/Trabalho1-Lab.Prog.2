#ifndef PROPRIETARIO_H
#define PROPRIETARIO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
class Proprietario
{
private:

	string nome1;
	string nome2;
	int qtd_proprietario;

public:
	Proprietario();
	Proprietario(string nome1, string nome2, int qtd_proprietario);

	// Gets
	string getNome1();
	string getNome2();
	int getQtdProprietario();

	// Sets
	void setNome1(string nome1);
	void setNome2(string nome2);
	void setQtdProprietario(int qtd_proprietario);
};
#endif