/*
 * Tabuleiro.h
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#ifndef TABULEIRO_H_
#define TABULEIRO_H_
#include <vector>
using std::vector;


#include "Posicao.h"

class Tabuleiro{
	
	private:	
		Posicao *posicao[8][8];
	
	public:
		Tabuleiro();
		Tabuleiro(vector <Piece *> p1, vector <Piece *> p2);
		~Tabuleiro();
		int reiPosicaoLinha();
		int reiPosicaoColuna();
		bool teamPosicao(int lin, int col);
		void desenharTabuleiro();
		bool mover(int lin1, int col1, int lin2, int col2);
		bool checarCaminhoLivre(int lin1, int col1, int lin2, int col2);
};

#endif
