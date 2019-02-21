#include "pch.h"
#include <iostream>

using namespace std;

#define tam 10

int fila[tam];

int ini = 0, fim = 0;

bool FilaCheia() {
	if (fim == tam) {
		return true;
	}
	return false;
}

bool FilaVazia() {
	if(fim == ini) {
		return true;
	}
	return false;
}

void Enfileirar() {
	if (FilaCheia()) {
		cout << "Fila lotada!" << endl;
	}
	else {
		int num;
		cout << "Entre com um valor inteiro: ";
		cin >> num;
		fila[fim] = num;
		fim++;
	}
}

void Desenfileirar() {
	if (FilaVazia()) {
		cout << "Fila vazia!" << endl;
	}
	else {
		ini++;
	}
}

void MostrarFila() {
	if (FilaVazia()) {
		cout << "Fila vazia!" << endl;
	}
	else {
		for (int i = ini; i < fim; i++) {
			cout << "[" << i + 1 << "] = " << fila[i] << " ";
		}
		cout << endl;
	}
}

void ExibirQtd() {
	if (FilaVazia()) {
		cout << "Fila vazia!" << endl;
	}
	else {
		cout << "A fila possui " << fim - ini << " elementos" << endl;
	}
}

int main()
{
	int opcao = 1;

	while (opcao != 0) {

		cout << "####### Operacoes com Fila #######\n \n";
		cout << "|||||||||||||||||||||||||||||||||||||\n\n";
		cout << "MENU\n\n";

		cout << "0 - Sair \n";
		cout << "1 - Enfileirar \n";
		cout << "2 - Desenfileirar \n";
		cout << "3 - Mostrar fila \n";
		cout << "4 - Exibir inicio \n";
		cout << "5 - Exibir a quantidade \n";
		cout << "6 - Esvaziar \n";
		cout << "\n";
		cout << "Opcao: ";
		cin >> opcao;

		if (opcao == 0) {
			cout << "Fim do programa";
		}
		else if (opcao == 1) {
			Enfileirar();
		}
		else if (opcao == 2) {
			Desenfileirar();
		}
		else if (opcao == 3) {
			MostrarFila();
		}
		else if (opcao == 4) {
		}
		else if (opcao == 5) {
			ExibirQtd();
		}
		else if (opcao == 6) {
		}
		else {
			cout << "Opçao Invalida";
		}
		system("PAUSE");
		system("cls");
	}
	return 0;
}

