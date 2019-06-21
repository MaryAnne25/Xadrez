/*
 * Rainha.cpp
 *
 *  Created on: 17 de abr de 2019
 *      Author: jv
 */
#include "Rainha.h"
#include <iostream>

using namespace std;

//faltam os movimentos especiais e saber se a peca eh inimiga ou aliada


Rainha::Rainha(bool Time) {    //construtor
	emJogo = true;
	time = Time;
}

char Rainha::desenha() {      // desenha a peca no tabuleiro
	if (time == false)
		return 'Q'; // peças pretas são MAIUSCULAS
	else
		return 'q';
}

bool Rainha::checaMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino){
	if ((linhaDestino > 0 && linhaDestino < 9) && (colunaDestino > 0 && colunaDestino < 9)) { //checa se esta no tabuleiro

		if (colunaDestino == colunaOrigem) {                       // se move na mesma coluna
			/*if (linhaDestino > linhaOrigem) {                    // se move da maior linha para menor linha
				for (int i = linhaOrigem+1; i  <= linhaDestino; i++) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[i][colunaDestino] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;
				}
				return true;   //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro
			} else {             // se move da menor linha para maior linha
				for (int i = linhaOrigem-1; i  <= linhaDestino; i--) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[i][colunaDestino] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;
				}  */
				return true;  //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro

		} else if (linhaDestino == linhaOrigem) { /*                      // se move na mesma linha
			if (colunaDestino > colunaOrigem) {                //se move da menor coluna pra maior coluna
				for (int i = colunaOrigem+1; i  <= colunaDestino; i++) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[linhaDestino][i] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;
				}
				return true;    //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro
			} else {                         //se move da maior coluna para menor coluna
				for (int i = colunaOrigem-1; i  <= colunaDestino; i--) {         // falta verificar se peca eh inimiga ou aliada
					if (matriz[linhaDestino][i] != '-')  // se todas as casas entre linhaDestino e linhaOrigem estiverem vazias
						return false;
				}
				*/
				return true;      //caso o caminho inteiro esteja vazio, ele vai terminar for e retornar verdadeiro

		} else if(linhaDestino < linhaOrigem && colunaDestino < colunaOrigem){ // diagonal superior esquerda
			for(int i = linhaOrigem - 1, j = colunaOrigem - 1; i >= linhaDestino && j >= colunaDestino; i--, j--){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j) // caso o destino esteja na diagonalw
					return true;
			}
			return false;

		} else if(linhaDestino < linhaOrigem && colunaDestino > colunaOrigem){ // diagonal superior direita
			for(int i = linhaOrigem - 1, j = colunaOrigem + 1; i >= linhaDestino && j <= colunaDestino; i--, j++){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j) // caso o destino esteja na diagonalw
					return true;
			}
			return false;

		} else if(linhaDestino > linhaOrigem && colunaDestino > colunaOrigem){ // diagonal inferior direita
			for(int i = linhaOrigem + 1, j = colunaOrigem + 1; i <= linhaDestino && j <= colunaDestino; i++, j++){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j) // caso o destino esteja na diagonalw
					return true;
		}
			return false;

		} else if(linhaDestino > linhaOrigem && colunaDestino < colunaOrigem){ // diagonal inferior esquerda
			for(int i = linhaOrigem + 1, j = colunaOrigem - 1; i <= linhaDestino && j >= colunaDestino; i++, j--){ // percorre a diagonal começando pelo proximo da origem
				if (linhaDestino == i && colunaDestino == j) // caso o destino esteja na diagonalw
					return true;
			}
			return false;

		} else
			return false;                        //caso o movimento nao seja valido




} else
		return false; // caso esteja fora do tabuleiro

}
