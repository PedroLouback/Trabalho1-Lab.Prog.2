#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include "Veiculo.h"
#include "Caminhao.h"
#include "Carro.h"
#include "Proprietario.h"
#include "RegistroGeral.h"

using namespace std;

/*Implemente o main. O main deve permitir ao usuário realizar as seguintes operações:
1.	Cadastrar um caminhão
2.	Cadastrar um carro
3.	Imprimir todos os carros e caminhões cadastrados
4.	Localizar um veiculo pelo nome do seu proprietário e imprimir os dados do veiculo.*/

int main()
{

    SetConsoleOutputCP(CP_UTF8);

    Caminhao caminhao;
    Carro carro;
    Proprietario p;
    RegistroGeral rg;
    int escolha, capacidadeTanque, numEixos, numPortas, capacidadePortaMalas, qtd_proprietario, i, cont_caminhao = 0, cont_carro = 0;
    string motorizacao, combustivel, nome_proprietario, nome;
    float cargaSuportada;

    while (1)
    {
        cout << "\n||                 PROGRAMA DE CADASTRO DE VEÍCULOS                 ||";
        cout << "\n||                                                                  ||";
        cout << "\n||1. Cadastrar um caminhão;                                         ||";
        cout << "\n||2. Cadastrar um carro;                                            ||";
        cout << "\n||3. Imprimir todos os veículos cadastrados;                        ||";
        cout << "\n||4. Localizar um veículo pelo nome do proprietário e imprimi-lo;   ||";
        cout << "\n||5. Para encerrar o programa.                                      ||";

        cout << ("\n\nInforme a opção escolhida: ");
        cin >> escolha;

        switch (escolha)
        {
        case 1:

            cout << "\nInforme a motorização do caminhão: ";
            cin.ignore();
            getline(cin, motorizacao);
            caminhao.setMotorizacao(motorizacao);

            cout << "Informe a capacidade do tanque (em litros): ";
            cin >> capacidadeTanque;
            caminhao.setCapacidadeTanque(capacidadeTanque);

            cout << "Informe o tipo de combustível que possui no caminhão: ";
            cin.ignore();
            getline(cin, combustivel);
            caminhao.setCombustivel(combustivel);

            cout << "Informe a carga suportada (em quilogramas): ";
            cin >> cargaSuportada;
            caminhao.setCargaSuportada(cargaSuportada);

            cout << "Informe o número de eixos do caminhão: ";
            cin >> numEixos;
            caminhao.setNumEixos(numEixos);

            cout << "Informe a quantidade de proprietário(s) desse veículo: ";
            cin >> qtd_proprietario;
            p.setQtdProprietario(qtd_proprietario);
            caminhao.CadastrarQtdProprietario(p);

            if (qtd_proprietario == 2 || qtd_proprietario == 1)
            {
                cin.ignore();
                cout << "Informe o nome do 1º proprietário: ";
                getline(cin, nome);
                caminhao.setNome1(nome, p);
                if (qtd_proprietario == 2)
                {
                    cout << "Informe o nome do 2º proprietário: ";
                    getline(cin, nome);
                    caminhao.setNome2(nome, p);
                }
            }
            else
            {
                cout << "\nERRO: O veículo deve possuir de 1 a 2 proprietários!\n";
                break;
            }
            rg.cadastrarCaminhao(caminhao);

            cont_caminhao++;
            break;

        case 2:

            cout << "\nInforme a motorização do carro: ";
            cin.ignore();
            getline(cin, motorizacao);
            carro.setMotorizacao(motorizacao);

            cout << "Informe a capacidade do tanque (em litros): ";
            cin >> capacidadeTanque;
            carro.setCapacidadeTanque(capacidadeTanque);

            cout << "Informe o tipo de combustível que possui no carro: ";
            cin.ignore();
            getline(cin, combustivel);
            carro.setCombustivel(combustivel);

            cout << "Informe o número de portas que possui no carro: ";
            cin >> numPortas;
            carro.setNumPortas(numPortas);

            cout << "Informe a capacidade do porta malas do carro (em litros): ";
            cin >> capacidadePortaMalas;
            carro.setCapacidadePortaMalas(capacidadePortaMalas);

            cout << "Informe a quantidade de proprietário(s) desse veículo: ";
            cin >> qtd_proprietario;
            p.setQtdProprietario(qtd_proprietario);
            carro.CadastrarQtdProprietario(p);

            if (qtd_proprietario == 2 || qtd_proprietario == 1)
            {
                cin.ignore();
                cout << "Informe o nome do 1º proprietário: ";
                getline(cin, nome);
                carro.setNome1(nome, p);
                if (qtd_proprietario == 2)
                {
                    cout << "Informe o nome do 2º proprietário: ";
                    getline(cin, nome);
                    carro.setNome2(nome, p);
                }
            }
            else
            {
                cout << "\nERRO: O veículo deve possuir de 1 a 2 proprietário!\n";
                break;
            }

            rg.cadastrarCarro(carro);
            cont_carro++;
            break;
        case 3:
            if (cont_caminhao == 0 && cont_carro == 0)
            {
                cout << "\nERRO: Nenhum veículo foi cadastrado então não há impressão!" << endl;
            }
            if (cont_caminhao >= 1)
            {
                rg.ImprimirTodosCaminhoes();
            }
            if (cont_carro >= 1)
            {
                rg.ImprimirTodosCarros();
            }
            break;
        case 4:
            cout << "\nInforme o nome do proprietário do veículo que deseja localizar: ";
            cin.ignore();
            getline(cin, nome_proprietario);
            if (rg.VerificaProprietario(nome_proprietario) == true)
            {
                rg.BuscaImpressao(nome_proprietario);
            }
            else
                cout << "\nERRO: Nenhum proprietário foi encontrado com o nome " << nome_proprietario << "!\n";
            break;
        case 5:
            cout << "\nOpção de encerramento escolhida!";
            cout << "\nENCERRANDO...";
            return 0;
        }
    }
}