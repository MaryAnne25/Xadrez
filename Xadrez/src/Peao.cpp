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


Peao::Peao(bool t){    //construtor
	emJogo = true;
	team = t;
}

void Peao::captured(){
	emJogo = false;
}

bool Peao::getTeam(){
	return team;
}

char Peao::desenha() {      // desenha a peca no tabuleiro
	if (team == false){
		return 'P';
	}
	else{
		return 'p';
	}
}

bool Peao::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){ // não estamos contando ainda com a verificação da diagonal, pois ainda não há peça a ser capturada
	if(linhaDestino >= 0 && linhaDestino < 8 && colunaDestino >= 0 && colunaDestino < 8){ // o destino deve estar dentro do tabuleiro
		if(team == true){ // se for o team branco
			if(colunaOrigem == 1 && (colunaDestino == 2 || colunaDestino == 3) && linhaOrigem == linhaDestino){ // primeira jogada pode pular 1 ou 2 casas
				return true;
			}
			else if(colunaOrigem > 1 && colunaDestino == colunaOrigem + 1 && linhaOrigem == linhaDestino){ // proximas jogadas pulam de 1 em 1
				return true;
			}
			else{
				return false;
			}
		} else if (team == false){ //se o team for preto
			if (colunaOrigem == 6 && (colunaDestino == 5 || colunaDestino == 4) && linhaOrigem == linhaDestino)
				return true;
			else if (colunaOrigem < 6 && colunaDestino == colunaOrigem - 1 && linhaOrigem == linhaDestino)
				return true;
			else{
				return false;
			}
		} else
			return false;
	} else
		return false; // se o destino for fora do tabuleiro
}
