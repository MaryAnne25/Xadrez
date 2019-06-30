/*
 * Bispo.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include "Bispo.h"
#include <iostream>

using namespace std;

//faltam os movimentos especiais e saber se a peca eh inimiga ou aliada


Bispo::Bispo(bool t) {    //construtor
	emJogo = true;
	team = t;
}

void Bispo::captured(){
	emJogo = false;
}

bool Bispo::getTeam(){
	return team;
}

char Bispo::desenha() {      // desenha a peca no tabuleiro
	if (team == false){
		return 'B'; // peças pretas são MAIUSCULAS
	}
	else{
		return 'b';
	}
}

bool Bispo::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	cout << "checaMovimento bispo" << endl;
	if(linhaDestino >= 0 && linhaDestino < 8 && colunaDestino >= 0 && colunaDestino < 8){ // o destino deve estar dentro do tabuleiro
		if(linhaDestino < linhaOrigem && colunaDestino < colunaOrigem){ // diagonal superior esquerda
			for(int i = linhaOrigem - 1, j = colunaOrigem - 1; i >= linhaDestino && j >= colunaDestino; i--, j--){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j){ // caso o destino esteja na diagonalw
					return true;
				}
			}
			return false;
		}
		else if(linhaDestino < linhaOrigem && colunaDestino > colunaOrigem){ // diagonal superior direita
			for(int i = linhaOrigem - 1, j = colunaOrigem + 1; i >= linhaDestino && j <= colunaDestino; i--, j++){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j){ // caso o destino esteja na diagonalw
					return true;
				}
			}
			return false;
		}
		else if(linhaDestino > linhaOrigem && colunaDestino > colunaOrigem){ // diagonal inferior direita
			for(int i = linhaOrigem + 1, j = colunaOrigem + 1; i <= linhaDestino && j <= colunaDestino; i++, j++){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j){ // caso o destino esteja na diagonalw
					return true;
				}
			}
			return false;
		}
		else if(linhaDestino > linhaOrigem && colunaDestino < colunaOrigem){ // diagonal inferior esquerda
			for(int i = linhaOrigem + 1, j = colunaOrigem - 1; i <= linhaDestino && j >= colunaDestino; i++, j--){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j){ // caso o destino esteja na diagonalw
					return true;
				}
			}
			return false;
		}
		else{
			return false; // caso não esteja em nenhuma diagonal
		}
	}
	else{
		return false; // caso esteja fora do tabuleiro
	}
}
