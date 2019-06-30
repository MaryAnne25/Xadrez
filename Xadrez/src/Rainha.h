/*
 * Rainha.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Piece.h"

class Rainha : public Piece{

public:
	Rainha(bool t);
	virtual ~Rainha(){ };
	void captured();
	bool getTeam();
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};
