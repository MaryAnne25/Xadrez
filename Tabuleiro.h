/*
 * Tabuleiro.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#ifndef TABULEIRO_H_
#define TABULEIRO_H_

#include "Posicao.h"

class Tabuleiro{
	
	private:	
		Posicao *posicao[9][9];
	
	public:
		Tabuleiro();
		~Tabuleiro();
		void desenharTabuleiro();
};

#endif