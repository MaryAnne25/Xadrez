/*
 * Tabuleiro.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include "Tabuleiro.h"

using namespace std;
Tabuleiro::Tabuleiro() {
	for (int l=1; l<=8; l++)
		for (int c=1; c <= 8; c++){
			posicao[l][c] = new Posicao(l, c);
		}
}

Tabuleiro::~Tabuleiro() {
	for (int l=1; l<=8; l++)
		for (int c=1; c <= 8; c++) {
			delete posicao[l][c];
		}
}

void Tabuleiro::desenharTabuleiro(){
	cout << endl << "    A  B  C  D  E  F  G  H " << endl;
	cout << "   ________________________"  << endl;
	for (int l=1; l <= 8; l++){
		cout << l << " |";
		for (int c=1 ; c <= 8; c++){
			if (posicao[l][c]->getCor())
				cout << " 1 " ;
			else
				cout << " 0 ";
		}
	cout << "|"<< endl;
	}
	cout << endl;
}