/*
 * Peao.cpp
 *
 *  Created on: 23 de abr de 2019
 *      Author: jv
 */
#include "Peao.h"
#include <iostream>

using namespace std;

//faltam os movimentos especiais e saber se a peca eh inimiga ou aliada


Peao::Peao(bool Time) {    //construtor
	emJogo = true;
	time = Time;
}

char Peao::desenha() {      // desenha a peca no tabuleiro
	if (time == false)
		return 'P'; // peças pretas são MAIUSCULAS
	else
		return 'p';
}

bool Peao::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){ // não estamos contando ainda com a verificação da diagonal, pois ainda não há peça a ser capturada

	if(linhaDestino >= 1 && linhaDestino <= 8 && colunaDestino >= 1 && colunaDestino <= 8){ // o destino deve estar dentro do tabuleiro
		if(time == false){ // se for o time preto
			if(linhaOrigem == 2 && (linhaDestino == 3 || linhaDestino == 4) && colunaOrigem == colunaDestino) // primeira jogada pode pular 1 ou 2 casas
				return true;
			else if(linhaOrigem > 2 && linhaDestino == linhaOrigem + 1 && colunaOrigem == colunaDestino) // proximas jogadas pulam de 1 em 1
				return true;
			else
				return false;
		} else if (time == true){ //se o time for branco
			if (linhaOrigem == 7 && (linhaDestino == 6 || linhaDestino == 5) && colunaOrigem == colunaDestino)
				return true;
			else if (linhaOrigem < 7 && linhaDestino == linhaOrigem - 1 && colunaOrigem == colunaDestino)
				return true;
			else
				return false;
		} else
			return false;
	} else
		return false; // se o destino for fora do tabuleiro
}
