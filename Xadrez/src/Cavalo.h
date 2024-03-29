/*
 * Cavalo.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Piece.h"

class Cavalo : public Piece {

public:
	Cavalo(bool t);
	virtual ~Cavalo(){ };
	void captured();
	bool getTeam();
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};
