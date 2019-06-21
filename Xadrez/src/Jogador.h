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

using namespace std;

class Jogador {
public:
	Jogador();
	virtual ~Jogador();

private:
	string nome;
	Piece *pieces[16];
};

#endif /* JOGADOR_H_ */
