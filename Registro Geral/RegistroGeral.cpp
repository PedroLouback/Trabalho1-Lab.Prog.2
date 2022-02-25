#include "RegistroGeral.h"
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

RegistroGeral::RegistroGeral()
{
	
}

// Sets
void    RegistroGeral::setVetCaminhao(vector<Caminhao> vetCaminhao)
{
    this->vetCaminhao = vetCaminhao;
}
void RegistroGeral::setVetCarro(vector<Carro> vetCarro)
{
    this->vetCarro = vetCarro;
}


//Metodos

Caminhao RegistroGeral::cadastrarCaminhao(Caminhao caminhao)
{
    vetCaminhao.push_back(caminhao);
    cout << "\nCaminhão cadastrado com sucesso!\n";
    return caminhao;
}

Carro RegistroGeral::cadastrarCarro(Carro carro)
{
    vetCarro.push_back(carro);
    cout << "\nCarro cadastrado com sucesso!\n";
    return carro;
}

void RegistroGeral::ImprimirTodosCaminhoes()
{
    int i;
    cout << "\n|| LISTA DE CAMINHÕES CADASTRADOS ||\n";
    for (i = 0; i < vetCaminhao.size(); i++)
    {
        cout << "\nCAMINHÃO " << i + 1 << endl;
        cout << "Motorização: " << vetCaminhao[i].getMotorizacao() << ";\n";
        cout << "Capacidade do Tanque: " << vetCaminhao[i].getCapacidadeTanque() << " litros;\n";
        cout << "Tipo do combustível que possui no caminhão: " << vetCaminhao[i].getCombustivel() << ";\n";
        cout << "Carga suportada pelo caminhão: " << vetCaminhao[i].getCargaSuportada() << "Kg;\n";
        cout << "Número de eixos: " << vetCaminhao[i].getNumEixos() << ";\n";
        cout << "Quantidade de proprietários: " << vetCaminhao[i].getQtdProprietarioC1() << ".\n";
    }
}

void RegistroGeral::ImprimirTodosCarros()
{
    int i;
    cout << "\n|| LISTA DE CARROS CADASTRADOS ||\n";
    for (i = 0; i < vetCarro.size(); i++)
    {
        cout << "\nCARRO " << i + 1 << endl;
        cout << "Motorização: " << vetCarro[i].getMotorizacao() << ";\n";
        cout << "Capacidade do Tanque: " << vetCarro[i].getCapacidadeTanque() << " litros;\n";
        cout << "Tipo de combustível que possui no carro: " << vetCarro[i].getCombustivel() << ";\n";
        cout << "Quantidade de portas que possui no carro: " << vetCarro[i].getNumPortas() << ";\n";
        cout << "Capacidade máxima do porta malas do carro: " << vetCarro[i].getCapacidadePortaMalas() << "Kg;\n";
        cout << "Quantidade de proprietários: " << vetCarro[i].getQtdProprietarioC2() << ";\n";
    }
}

bool RegistroGeral::VerificaProprietario(string nome)
{
	int i;
	for (i = 0; i < vetCaminhao.size(); i++)
	{
        if (vetCaminhao[i].getNome1() == nome || vetCaminhao[i].getNome2() == nome)
        {
            return true;
		}
    }
    for (i = 0; i < vetCarro.size(); i++)
    {
        if (vetCarro[i].getNome1() == nome || vetCarro[i].getNome2() == nome)
        {
            return true;
        }
    }
    return false;
}

void RegistroGeral::BuscaImpressao(string nome)
{
    int i;
    for (i = 0; i < vetCaminhao.size(); i++)
    {
        if (vetCaminhao[i].getNome1() == nome || vetCaminhao[i].getNome2() == nome)
        {
            cout << "\nProprietário " << nome << " localizado com sucesso! Segue os dados do seu caminhão: " << endl;
            cout << "\nMotorização: " << vetCaminhao[i].getMotorizacao() << ";\n";
            cout << "Capacidade do Tanque: " << vetCaminhao[i].getCapacidadeTanque() << " litros;\n";
            cout << "Tipo do combustível que possui no caminhão: " << vetCaminhao[i].getCombustivel() << ";\n";
            cout << "Carga suportada pelo caminhão: " << vetCaminhao[i].getCargaSuportada() << "Kg;\n";
            cout << "Número de eixos: " << vetCaminhao[i].getNumEixos() << ".\n";
            break;
        }
    }
    for (i = 0; i < vetCarro.size(); i++)
    {
        if (vetCarro[i].getNome1() == nome || vetCarro[i].getNome2() == nome)
        {
            cout << "\nProprietário " << nome << " localizado com sucesso! Segue os dados do seu carro: " << endl;
            cout << "\nMotorização: " << vetCarro[i].getMotorizacao() << ";\n";
            cout << "Capacidade do Tanque: " << vetCarro[i].getCapacidadeTanque() << " litros;\n";
            cout << "Tipo do combustível que possui no carro: " << vetCarro[i].getCombustivel() << ";\n";
            cout << "Capacidade máxima do porta malas: " << vetCarro[i].getCapacidadePortaMalas() << " litros;\n";
            cout << "Número de portas: " << vetCarro[i].getNumPortas() << ".\n";
            break;
        }
    }
}