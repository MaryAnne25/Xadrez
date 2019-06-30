/*
 * Rei.h
 *
 *  Created on: 16 de abr de 2019
 *      Author: Mariane
 */
#include <iostream>
#include <string.h>
#include "Piece.h"

class Rei : public Piece{

public:
	Rei(bool t);
	virtual ~Rei(){ };
	void captured();
	bool getTeam();
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};
