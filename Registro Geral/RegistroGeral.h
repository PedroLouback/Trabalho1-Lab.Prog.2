#ifndef REGISTROGERAL_H
#define REGISTROGERAL_H
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include "Carro.h"
#include "Caminhao.h"

using namespace std;

class RegistroGeral  
{
	private:

		vector <Caminhao> vetCaminhao;
		vector <Carro> vetCarro;

	public:

		RegistroGeral();

		// Sets
		void setVetCaminhao(vector<Caminhao> vetCaminhao);
		void setVetCarro(vector<Carro> vetCarro);

		//Metodos
		Caminhao cadastrarCaminhao(Caminhao caminhao);
		Carro cadastrarCarro(Carro carro);
		void ImprimirTodosCaminhoes();
		void ImprimirTodosCarros();
		bool VerificaProprietario(string nome);
		void BuscaImpressao(string nome);
};
#endif