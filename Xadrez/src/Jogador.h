/*
 * Jogador.h
 *
 *  Created on: 21 de jun de 2019
 *      Author: Mariane
 */

#ifndef JOGADOR_H_
#define JOGADOR_H_
#include "Piece.h"
#include <string>
#include <vector>
using std::vector;

using namespace std;

class Jogador {
public:
	Jogador();
	Jogador(string n, vector <Piece *> p);
	virtual ~Jogador();
	void setNome(string n);
	string getNome();

private:
	string nome;
	vector <Piece *> pieces;
};

#endif /* JOGADOR_H_ */
