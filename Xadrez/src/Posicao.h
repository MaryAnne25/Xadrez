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

class Posicao{

	private:
		int linha, coluna;
		bool cor; // preto é ausencia de cor 0
		bool ocupado;
		
	public:
		Posicao(int Linha, int Coluna);
		bool getCor();
		bool getOcupado();
};

#endif
