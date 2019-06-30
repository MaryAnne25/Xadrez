/*
 * Torre.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Piece.h"

class Torre : public Piece{

public:
	Torre(bool t);
	virtual ~Torre(){ };
	void captured();
	bool getTeam();
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};
