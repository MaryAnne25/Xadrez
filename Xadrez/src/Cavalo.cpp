/*
 * Cavalo.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include "Cavalo.h"
#include <iostream>

using namespace std;

//faltam os movimentos especiais e saber se a peca eh inimiga ou aliada


Cavalo::Cavalo(bool Time) {    //construtor
	emJogo = true;
	time = Time;
}


char Cavalo::desenha() {      // desenha a peca no tabuleiro
	if (time == false)
		return 'C'; // peças pretas são MAIUSCULAS
	else
		return 'c';
}

bool Cavalo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	if(linhaDestino >= 1 && linhaDestino <= 8 && colunaDestino >= 1 && colunaDestino <= 8){ // o destino deve estar dentro do tabuleiro

		if(linhaDestino == linhaOrigem - 2 && (colunaDestino == colunaOrigem - 1 || colunaDestino == colunaOrigem + 1)){		//dupla superior
			return true;   // caso o destino esteja vazio

		} else if(linhaDestino == linhaOrigem + 2 && (colunaDestino == colunaOrigem - 1 || colunaDestino == colunaOrigem + 1)){	//dupla inferior
			return true;   // caso o destino esteja vazio

		} else if(colunaDestino == colunaOrigem + 2 && (linhaDestino == linhaOrigem - 1 || linhaDestino == linhaOrigem + 1)){	//dupla direita
			return true;   // caso o destino esteja vazio

		} else if(colunaDestino == colunaOrigem - 2 && (linhaDestino == linhaOrigem - 1 || linhaDestino == linhaOrigem + 1)){	//dupla esquerda
			return true;   // caso o destino esteja vazio

		} else
			return false;

	} else
		return false;
}
