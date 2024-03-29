/*
 * Posicao.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#ifndef POSICAO_H_
#define POSICAO_H_

#include <iostream>
#include <string.h>
#include "Piece.h"

class Posicao{

	private:
		int linha;
		int coluna;
		bool cor; // preto � ausencia de cor 0
		bool ocupado;
		Piece* piece;
		
	public:
		Posicao(int Linha, int Coluna);
		bool getCor();
		bool getOcupado();
		void setOcupado(Piece* p);
		void setDesocupado();
		Piece* getPiece();
};

#endif
