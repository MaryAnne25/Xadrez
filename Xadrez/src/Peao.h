/*
 * Peao.h
 *
 *  Created on: 23 de abr de 2019
 *      Author: jv
 */
#include <iostream>
#include <string.h>
#include "Piece.h"

class Peao : public Piece{

public:
	Peao(bool Time);
	char desenha();
	bool checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino);
};
