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


Cavalo::Cavalo(bool t){    //construtor
	emJogo = true;
	team = t;
}

void Cavalo::captured(){
	emJogo = false;
}

bool Cavalo::getTeam(){
	return team;
}

char Cavalo::desenha() {      // desenha a peca no tabuleiro
	if (team == false){
		return 'C'; // peças pretas são MAIUSCULAS
	}
	else{
		return 'c';
	}
}

bool Cavalo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	cout << "checaMovimento cavalo" << endl;
	if(linhaDestino >= 0 && linhaDestino < 8 && colunaDestino >= 0 && colunaDestino < 8){ // o destino deve estar dentro do tabuleiro

		if(linhaDestino == linhaOrigem - 2 && (colunaDestino == colunaOrigem - 1 || colunaDestino == colunaOrigem + 1)){		//
			return true;   // caso o destino esteja vazio
		}
		else if(linhaDestino == linhaOrigem + 2 && (colunaDestino == colunaOrigem - 1 || colunaDestino == colunaOrigem + 1)){	//dupla inferior
			return true;   // caso o destino esteja vazio
		}
		else if(colunaDestino == colunaOrigem + 2 && (linhaDestino == linhaOrigem - 1 || linhaDestino == linhaOrigem + 1)){	//dupla direita
			return true;   // caso o destino esteja vazio
		}
		else if(colunaDestino == colunaOrigem - 2 && (linhaDestino == linhaOrigem - 1 || linhaDestino == linhaOrigem + 1)){	//dupla esquerda
			return true;   // caso o destino esteja vazio
		}
		else{
			return false;
		}

	}
	else{
		return false;
	}
}
